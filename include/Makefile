.PHony : clean

variables.o : variables.c
	gcc -c -o variables.o variables.c `pkg-config --cflags --libs gtk+-2.0`

clean:
	rm *.*~ *.o
