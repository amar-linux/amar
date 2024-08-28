CC=gcc
CFLAGS=-g -Wall
BINS=party
$(RM)=rm

all:$(BINS)

%:%.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(BINS)
	$(RM) -r *.dSYM

