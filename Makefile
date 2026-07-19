CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -Isrc/io -Isrc/core
SRC = src/core/life.c \
		 src/io/control.c \
		 src/io/display.c \
		 src/io/input.c \
		 src/main.c
TARGET_DIR = build
TARGET = ${TARGET_DIR}/game_of_life

all: ${TARGET}

${TARGET}: ${SRC}
	mkdir -p ${TARGET_DIR}
	${CC} ${CFLAGS} ${SRC} -o ${TARGET}

clean:
	rm -rf ${TARGET_DIR}

rebuild: clean all

run: 
	./${TARGET}

.PHONY: all clean rebuild run