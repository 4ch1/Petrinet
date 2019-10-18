CLAGS=-Wall -pedantic -O2
PFLAGS=-lsimlib -lm

CC = g++

all: insectsSim

insectsSim: main.cc ladyBird.cc ladyBird.h farm.cc farm.h generator.cc generator.h
	$(CC) $(CFLAGS) -o $@ $^ $(PFLAGS)

run:
	./insectsSim 0 10 10

	./insectsSim 100 10 10

	./insectsSim 5 20 75



zip:
	zip 07_$(AUTHOR).zip $(FILES)