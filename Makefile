Malang : Malang.c
	gcc Malang.c -o Malang `pkg-config --cflags --libs gtk+-2.0`

clean :
	rm *.c~




