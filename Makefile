CC := gcc
CFLAGS := -Wall -Werror -Wextra
rm := rm -f
src := src/*.c
obj := src/*.o
build := ./build/
name := $(build)vm

all: $(obj)
	$(CC) $(src) -o $(name)

objclean:
	$(rm) $(obj)

clean: objclean
	$(rm) $(name)

