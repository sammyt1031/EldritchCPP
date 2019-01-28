#ifndef SHUFFLABLE_HPP
#define SHUFFLABLE_HPP

#include <vector>
#include <random> // std::default_random_engine
#include <chrono>

template<typename T>
class Shufflable {
    
public:
    
    explicit Shufflable (std::vector<T>& other_vec, unsigned seed = std::chrono::system_clock::now().time_since_epoch().count());
    
    T& draw(void);
    
    void discard(T& item);
    
    void shuffle(void);
    
    void full_shuffle(void);

    void print(void) const;

private:
    
    std::vector<T> container;
    std::default_random_engine rand_gen;
    
    typename std::vector<T>::iterator draw_it;
    typename std::vector<T>::iterator disc_it;
    
    Shufflable(const Shufflable&);
    Shufflable& operator=(const Shufflable&);
        
};

#include <stdexcept>
#include <algorithm> // std::shuffle, std::iter_swap
#include <utility> // std::move

#include <iostream>

template<typename T>
Shufflable<T>::Shufflable (std::vector<T>& other_vec, unsigned seed)
:
    container(std::move(other_vec)),
    rand_gen(seed),
    draw_it(container.begin()),
    disc_it(container.begin())
{}
        
template<typename T>
T& Shufflable<T>::draw(void)
{
    if (this->draw_it == this->container.end())
    {
        throw std::out_of_range("No more items to draw");
    }
    
    auto& item(*this->draw_it);
    ++this->draw_it;
    
    return item;
}

template<typename T>
void Shufflable<T>::discard(T& item)
{
    if (this->disc_it == this->draw_it)
    {
        throw std::out_of_range("No more discardable items");
    }
    
    *this->disc_it = std::move(item);
    
    ++disc_it;
}

template<typename T>
void Shufflable<T>::shuffle(void)
{   
    std::shuffle( this->draw_it, this->container.end(), this->rand_gen );
}

template<typename T>
void Shufflable<T>::full_shuffle(void)
{
    while (this->disc_it != this->container.begin())
    {
        --this->disc_it;
        --this->draw_it;
        
        std::iter_swap(this->disc_it, this->draw_it);
    }
    
    this->shuffle();
}

template<typename T>
void Shufflable<T>::print(void) const
{
    for (auto& it : this->container)
    {
        std::cout << "Value: " << *it << std::endl;
    }
}

#endif // SHUFFLABLE_HPP

