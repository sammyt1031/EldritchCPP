MAKE_INC = ${shell pwd}/gen_make.mk

LDFLAGS = -Lmain -Lgame_objs

INC = -Iinc -Igameobjs/inc -Iresrces/inc

all: main game_objs
	g++ ${LDFLAGS} -o $@ $^

main:
	cd main; ${MAKE} "INC=${INC}" "MAKE_INC=${MAKE_INC}"

game_objs:
	cd gameobjs; ${MAKE} "INC=${INC}" "MAKE_INC=${MAKE_INC}"

.PHONY: clean
clean:
	${RM} count *.o ${PROG}

.PHONY: cleandep
cleandep:
	${RM} ${DEPS}
