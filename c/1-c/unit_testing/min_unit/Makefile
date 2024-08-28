CC=clang

get_min_int.o: get_min_int.c get_min_int.h
	$(CC) -c get_min_int.c

test_min_ints: test_min_ints.c minunit.h get_min_int.o
	$(CC) -o test_min_ints test_min_ints.c get_min_int.o

test: test_min_ints
	./test_min_ints

clean:
	rm -rf *.o test_min_ints

