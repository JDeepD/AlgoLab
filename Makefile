CC = gcc
ALGOFILE = day1/mergesort.c
OBJECTS = dist/main.o dist/helper.o

mainapp: main.o helper.o
	$(CC) $(OBJECTS) -o a.exe

main.o: main.c
	$(CC) -c main.c -o dist/main.o

helper.o: $(ALGOFILE)
	$(CC) -c $(ALGOFILE) -o dist/helper.o

clean:
	rm -rf dist/*