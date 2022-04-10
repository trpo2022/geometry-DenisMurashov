


CFLAGS = -Wall -Wextra -Werror

bin/hello: obj/src/hello/main.o obj/src/libhello/hello.o
	$(CC) $(CFLAGS) -o $@ $^

obj/src/hello/hello.o: src/hello/hello.c
	$(CC) -c $(CFLAGS) -o $@ $<

obj/src/libhello/hello.o: src/libhello/hello.c
	$(CC) -c $(CFLAGS) -o $@ $<
	
run:
	./*main
clean:
	rm -f bin/* obj/src/hello*.o obj/src/libhello*.c
