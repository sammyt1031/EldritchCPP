CXX = g++
CXXFLAGS = -g -Wall

CURR_DIR = ${shell pwd}
BUILD_DIR = ${CURR_DIR}/build

SRCS = ${wildcard src/*.cpp}
OBJS = ${SRCS:src/%.cpp=%.o}
DEPS = ${SRCS:src/%.cpp=inc/%.hpp}

$(info ${SRCS})
$(info ${OBJS})
$(info ${DEPS})

.cpp.o:
	${CXX} ${CXXFLAGS} ${INC} -c $<
	mkdir -p build
	mv $@ build

all: ${OBJS}
	${CXX} -o $@ $^ ${OBJS}

