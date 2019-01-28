#ifndef CLUE_HPP
#define CLUE_HPP

class Location;

class Clue
{

public:
    
    explicit Clue(Location& loc);
    Location& getLoc(void);

private:
    
    Location& loc;
    
};

#endif // CLUE_HPP
