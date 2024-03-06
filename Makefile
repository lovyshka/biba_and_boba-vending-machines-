all:
	gcc main.c print_vending_machine.c

clean:
	rm -rf a.out

rebuild: clean all