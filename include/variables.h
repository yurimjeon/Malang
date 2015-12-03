#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include <gtk/gtk.h>

extern int level;
extern int life;
extern int question[100];
extern int answer[100];
extern int ansidx;
extern int questionFlag;
extern int answerFlag;
extern int waitingFlag;
extern int qidx;
extern char buf[100];

extern GtkWidget *window;
extern GtkWidget *vbox;
extern GtkWidget *hbox;
extern GtkWidget *label1, *label2, *label3;
extern GtkWidget *hbox1, *hbox2, *hbox3, *hbox4;
extern GtkWidget *button[16];

#endif
