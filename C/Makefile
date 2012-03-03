CC=gcc
CFLAGS=-Wall -Werror -Wextra -Wstrict-prototypes -Wmissing-prototypes -Wpointer-arith -Wreturn-type -Wcast-qual -Wswitch -Wshadow -Wcast-align -Wno-unused-parameter -Wchar-subscripts -Winline -Wnested-externs -Wredundant-decls
OBJS=test-dkim-regdom.o dkim-regdom.o
EXECUTABLE=test-dkim-regdom

all: $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)
	rm -f *.o

$(EXECUTABLE): $(OBJS)

.SUFFIXES :.o

.c.o:
	$(CC) -o $@ -c $< $(CFLAGS)
