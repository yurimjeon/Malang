#include "variables.h"
#include <gtk/gtk.h>

void buttonClicked(GtkWidget* widget)
{
	int i;

	if (questionFlag == 1)
	{
		if (widget == button[0])
		{
			answer[ansidx] = 0;
			ansidx++;
		}
		else if (widget == button[1])
		{
			answer[ansidx] = 1;
			ansidx++;
		}
		else if (widget == button[2])
		{
			answer[ansidx] = 2;
			ansidx++;
		}
		else if (widget == button[3])
		{
			answer[ansidx] = 3;
			ansidx++;
		}
		else if (widget == button[4])
		{
			answer[ansidx] = 4;
			ansidx++;
		}
		else if (widget == button[5])
		{
			answer[ansidx] = 5;
			ansidx++;
		}
		else if (widget == button[6])
		{
			answer[ansidx] = 6;
			ansidx++;
		}
		else if (widget == button[7])
		{
			answer[ansidx] = 7;
			ansidx++;
		}
		else if (widget == button[8])
		{
			answer[ansidx] = 8;
			ansidx++;
		}
		else if (widget == button[9])
		{
			answer[ansidx] = 9;
			ansidx++;
		}
		else if (widget == button[10])
		{
			answer[ansidx] = 10;
			ansidx++;
		}
		else if (widget == button[11])
		{
			answer[ansidx] = 11;
			ansidx++;
		}
		else if (widget == button[12])
		{
			answer[ansidx] = 12;
			ansidx++;
		}
		else if (widget == button[13])
		{
			answer[ansidx] = 13;
			ansidx++;
		}
		else if (widget == button[14])
		{
			answer[ansidx] = 14;
			ansidx++;
		}
		else if (widget == button[15])
		{
			answer[ansidx] = 15;
			ansidx++;
		}
		else
		{
			printf("ERROR!\n");
		}
		
		
	}
	if (ansidx == level)
	{
		answerFlag = 1;
	}

	if (ansidx <= level && ansidx != 0)
	{
		printf("Your answer is ");
		for (i = 0; i < ansidx; i++)
		{
			printf("%d ", answer[i]);
		}
		printf("\n");
	}
}

int isSensitive(int a)
{
	if (a == 1) // non sensitive
	{
		gtk_widget_set_sensitive(hbox1, FALSE);
		gtk_widget_set_sensitive(hbox2, FALSE);
		gtk_widget_set_sensitive(hbox3, FALSE);
		gtk_widget_set_sensitive(hbox4, FALSE);
	}
	else
	{
		gtk_widget_set_sensitive(hbox1, TRUE);
		gtk_widget_set_sensitive(hbox2, TRUE);
		gtk_widget_set_sensitive(hbox3, TRUE);
		gtk_widget_set_sensitive(hbox4, TRUE);
	}
}

