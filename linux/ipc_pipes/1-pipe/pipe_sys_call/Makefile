RM=rm
CC=gcc

CFLAGS=-Wall -g
OBJS=popen3.o
BINS= testprogram plainopenex popen3example


all:$(BINS)


popen3example: popen3example.c $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%: %.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BINS) $(OBJS) *.dsYM

