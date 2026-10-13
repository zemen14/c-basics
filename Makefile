CC = clang
CFLAGS = -Wall -Wpedantic -Werror -Wextra

all: basics_test caat

basics_test: basics_test.o basics.o
	$(CC) basics.o basics_test.o -lm -o basics_test

basics_test.o: basics_test.c basics.h
	$(CC) $(CFLAGS) -c basics_test.c

basics.o: basics.c basics.h
	$(CC) $(CFLAGS) -c basics.c

caat: caat.c
	$(CC) $(CFLAGS) caat.c -o caat

clean:
	rm -f basics_test caat *.o

format:
	clang-format -i -style=file *.[ch]
