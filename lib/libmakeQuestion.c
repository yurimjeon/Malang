#include "variables.h"
#include <gtk/gtk.h>
#include <stdio.h>

void makeQuestion()
{
	int i;
	for (i = 0; i < level; i++)
	{
		question[i] = rand() % 16;
	}
	waitingFlag = 1;
	printf("Pay attention on the button!\n");

	return;
}
