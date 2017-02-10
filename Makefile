all:1.o 1.S 1.i
	gcc 1.o -o 1
%.o:%.S
	gcc -c $^ -o $@
%.S:%.i
	gcc -S $^ -o $@
%.i:%.c
	gcc -E $^ -o $@
.PHONE:clean
clean:
	rm *.o *.S *.i 1
