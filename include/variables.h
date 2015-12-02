#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

extern int level = 1;
extern int life = 3;
extern int question[100] = {0,};
extern int answer[100] = {0,};
extern int ansidx = 0;
extern int questionFlag = 0;
extern int answerFlag = 0;
extern int waitingFlag = 0;
extern int qidx = 0;
extern char buf[100];

#endif
