libmakeQuestion.a : libmakeQuestion.o
	ar rv libmakeQuestion.a libmakeQuestion.o ../include/variables.o
libmakeQuestion.o : libmakeQuestion.c
	gcc -c -o libmakeQuestion.o libmakeQuestion.c -I../include 
clean:
	rm *.*~
