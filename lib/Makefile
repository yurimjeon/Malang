TARGET = libmakeQuestion.a libsolveQuestion.a libconfirmQuestion.a
.PHony : all clean

all : $(TARGET)

libmakeQuestion.a : libmakeQuestion.o ../include/variables.o
	ar rv libmakeQuestion.a libmakeQuestion.o ../include/variables.o
libmakeQuestion.o : libmakeQuestion.c
	gcc -c -o libmakeQuestion.o libmakeQuestion.c -I../include `pkg-config --cflags --libs gtk+-2.0`

libsolveQuestion.a : libsolveQuestion.o ../include/variables.o
	ar rv libsolveQuestion.a libsolveQuestion.o ../include/variables.o
libsolveQuestion.o : libsolveQuestion.c
	gcc -c -o libsolveQuestion.o libsolveQuestion.c -I../include `pkg-config --cflags --libs gtk+-2.0`

libconfirmQuestion.a : libconfirmQuestion.o ../include/variables.o
	ar rv libconfirmQuestion.a libconfirmQuestion.o ../include/variables.o
libconfirmQuestion.o : libconfirmQuestion.c
	gcc -c -o libconfirmQuestion.o libconfirmQuestion.c -I../include `pkg-config --cflags --libs gtk+-2.0`

clean:
	rm *.*~
