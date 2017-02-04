all:1.o
	gcc 1.o -o 1
*.o:*.c
	gcc -c $^ -o $@
.PHONE:clean
clean:
	rm *.o 1
