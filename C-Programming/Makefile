C = gcc
CFLAGS = -Wall -std=c99 -pedantic
MAIN = minePrimes
OBJS = primes.c
all : $(MAIN)

$(MAIN) : $(OBJS) 
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

clean :
	rm *.o $(MAIN) core
