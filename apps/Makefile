
LIB = ../lib
.PHony : clean

Malang : Malang.o ../include/variables.o $(LIB)/libconfirmQuestion.a $(LIB)/libsolveQuestion.a $(LIB)/libmakeQuestion.a
	gcc -m32 -o Malang Malang.o ../include/variables.o \
	-I../include \
	-L../lib -lconfirmQuestion -lsolveQuestion -lmakeQuestion `pkg-config --cflags --libs gtk+-2.0`
Malang.o : Malang.c
	gcc -c -o Malang.o Malang.c -I../include `pkg-config --cflags --libs gtk+-2.0`

clean :
	rm *.*~ *.o Malang
