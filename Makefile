


CFLAGS = -Wall -Wextra -Werror
CCFLAGS = -Wall -Wextra -Wconversion -Wredundant-decls -Wshadow -Wno-unused-parameter

all: main

main: bin/main

geometry_test.o: test/geometry_test.c
	gcc -c $(CCFLAGS) -o $@ $< -lm

main.o: test/main.c
	gcc -c $(CCFLAGS) -o $@ $< -lm

test: geometry_test.o main.o
	gcc $(LDFLAGS) geometry_test.o main.o -o tests -lm

bin/hello: obj/src/hello/main.o obj/src/libhello/hello.o
	$(CC) $(CFLAGS) -o $@ $^

obj/src/hello/main.o: src/hello/main.c
	$(CC) -c $(CFLAGS) -o $@ $<

obj/src/libhello/hello.o: src/libhello/hello.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
run:
	./*main
	
.PHONY: clean

clean:
	rm -f bin/* obj/src/main*.o obj/src/libhello*.o
	rm -f tests *.o
