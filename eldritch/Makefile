PROG = eldritch
CXX = g++
CXXFLAGS = -g -Wall
LDFLAGS = -Lgame_objs

CURR_DIR = ${shell pwd}

INC = -I${CURR_DIR}/gameobjs/inc
SRCS = ${wildcard *.cpp}
OBJS = ${SRCS:.cpp=.o}
DEPS = ${OBJS:.o=.hpp}
BUILD_DIR = ${CURR_DIR}/../build

.cpp.o:
	${CXX} ${CXXFLAGS} -c $<
	mv $@ build

${PROG}: ${OBJS}
	${CXX} ${LDFLAGS} ${INC} -o $@ $^ ${OBJS}

game_objs:
	cd gameobjs/src; ${MAKE} all "INC=${INC}"

.PHONY: clean
clean:
	${RM} count *.o ${PROG}

.PHONY: cleandep
cleandep:
	${RM} ${DEPS}
