#include <gtk/gtk.h>
#include "variables.h"

int confirmAnswer()
{
	int i;
	for (i = 0; i < level; i++)
	{
		if (question[i] != answer[i])
		{
			return 0; //wrong answer
		}
	}
	return 1; //correct
}

int isCorrect()
{
	printf("correct!\n");
	level++;
	sprintf(buf, "Level: %d", level);
	gtk_label_set_text(GTK_LABEL(label1), buf);
	gtk_label_set_text(GTK_LABEL(label2), "[correct!] :D");
	questionFlag = 0;
	answerFlag = 0;
	ansidx = 0;
}

int isWrong()
{
	printf("wrong!\n");
	
	life--;
	sprintf(buf, "Life: %d", life);
	gtk_label_set_text(GTK_LABEL(label3), buf);
	gtk_label_set_text(GTK_LABEL(label2), "[wrong!] T.T");
	questionFlag = 0;
	answerFlag = 0;
	ansidx = 0;
}
