libQuestion.a: Question.o
	ar rv libQuestion.a Question.o
Question.o: Question.c
	cc -c -g -I../include Question.c -o Question.o

clean:
	rm *.o libfuncs.a
