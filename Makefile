mour:
	gcc moura.c print_vending_machine.c

mili:
	gcc mili.c print_vending_machine.c

clean:
	rm -rf a.out

rebuild: clean all