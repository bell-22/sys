main.o: main.c add.h
	gcc -W -Wall -c $^
add.o: add.c add.h
	gcc -W -Wall -c $^
calc_make:main.o add.o
	gcc -W -Wall -o $@ $^
