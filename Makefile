	all: main
	
	main: main.c
		gcc -Wall -Werror -o main main.c
	clean:
		rm main
	run:
		./main
	CFLAGS = -Wall -Wextra -Werror
	CPPFLAGS = -MMD
	PARAMS := $(filter-out run,$(MAKECMDGOALS))

	run:
   		 @printf '/usr/bin/bash -e {0}\n'

	%:;
	hello: obj/src/hello/main.o obj/src/libhello/libhello.a
        	$(CC) $(CFLAGS) -o $@ $^

	main.o: src/hello/main.c
        	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

	libhello.a: src/libhello/hello.o
        	ar rcs $@ $^

	hello.o: src/libhello/hello.c
        	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

	-include main.d hello.d
