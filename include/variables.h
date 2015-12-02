#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int level = 1;
int life = 3;
int question[100] = {0,};
int answer[100] = {0,};
int ansidx = 0;
int questionFlag = 0;
int answerFlag = 0;
int waitingFlag = 0;
int qidx = 0;
char buf[100];

#endif
