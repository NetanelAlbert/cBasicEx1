CC = gcc
FILES = basicMath.o power.o
MAIN = main.o

all: mains maind

libmymaths.a: $(FILES)
	ar -rcs libmymaths.a $(FILES)

mains: $(MAIN) libmymaths.a
	gcc -Wall -g -o mains main.o libmymaths.a

libmymathd.so: $(FILES)
	gcc -shared -o libmymathd.so $(FILES)

maind: $(MAIN) libmymathd.so
	gcc -Wall -g -o maind $(MAIN) ./libmymathd.so

basicMath.o: basicMath.c myMath.h
	gcc -Wall -fPIC -c -o basicMath.o basicMath.c

power.o: power.c myMath.h
	gcc -Wall -fPIC -c -o power.o power.c

main.o: main.c myMath.h
	gcc -Wall -c -o main.o main.c

.PHONY: clean all

clean:
	rm -f *o *a *so mains maind
