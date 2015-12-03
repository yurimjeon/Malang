#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "variables.h"


int timer_handler(gpointer data)//make question
{
	int i;
	if (questionFlag == 0 && life > 0)
	{
		gtk_label_set_text(GTK_LABEL(label2), "♥Malang♥");
		isSensitive(1); // non sensitive button
		if (waitingFlag == 0)
		{
			makeQuestion();
		}
		gtk_button_set_label(GTK_BUTTON(button[question[qidx]]), "O");
		if (qidx != 0)
		{
			printf("del\n");
			gtk_button_set_label(GTK_BUTTON(button[question[qidx - 1]]), " ");
		}
		qidx++;
		if (qidx == level)
		{

			printf("question is ");
			for (i = 0; i < qidx; i++)
			{
				printf("%d ", question[i]);
			}
			printf("\n");

			printf("set\n");
			questionFlag = 1;
			waitingFlag = 0;
			qidx = 0;
		}
	}
	else if (life == 0) // game over
	{
		gtk_label_set_text(GTK_LABEL(label2), "Game is Over");
		isSensitive(1);
		return 0;
	}
	else
	{
		isSensitive(0);//sensitive button
		gtk_button_set_label(GTK_BUTTON(button[question[level - 1]]), " ");
		if (answerFlag == 1)
		{   //confirm
			if (confirmAnswer() == 1) //correct
			{
				isCorrect();
			}
			else //wrong
			{
				isWorong();
			}
		}
		else
		{
			printf("waiting\n");
		}
	}
}

int main(int argc, char *argv[])
{
	g_timeout_add(1000, timer_handler, 0); //1 seconed
	srand(time(0));
	gtk_init(&argc, &argv);
	//window setup
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	//label UI
	hbox = gtk_hbox_new(TRUE, 0);
	gtk_widget_set_size_request(hbox, 300, 60);
	label1 = gtk_label_new("Level: 1");
	gtk_widget_set_size_request(label1, 100, 20);
	label2 = gtk_label_new("♥Malang♥");
	gtk_widget_set_size_request(label2, 100, 20);
	label3 = gtk_label_new("Life: 3");
	gtk_widget_set_size_request(label2, 100, 20);
	gtk_container_add(GTK_CONTAINER(hbox), label1);
	gtk_container_add(GTK_CONTAINER(hbox), label2);
	gtk_container_add(GTK_CONTAINER(hbox), label3);
	//button UI
	hbox1 = gtk_hbox_new(TRUE, 0);
	hbox2 = gtk_hbox_new(TRUE, 0);
	hbox3 = gtk_hbox_new(TRUE, 0);
	hbox4 = gtk_hbox_new(TRUE, 0);
	gtk_widget_set_size_request(hbox1, 200, 40);
	gtk_widget_set_size_request(hbox2, 200, 40);
	gtk_widget_set_size_request(hbox3, 200, 40);
	gtk_widget_set_size_request(hbox4, 200, 40);
	int i;
	for (i = 0; i < 16; i++)
	{
		button[i] = gtk_button_new_with_label(" ");
		gtk_widget_set_size_request(button[i], 40, 40);
	}
	gtk_container_add(GTK_CONTAINER(hbox1), button[0]);
	gtk_container_add(GTK_CONTAINER(hbox1), button[1]);
	gtk_container_add(GTK_CONTAINER(hbox1), button[2]);
	gtk_container_add(GTK_CONTAINER(hbox1), button[3]);
	gtk_container_add(GTK_CONTAINER(hbox2), button[4]);
	gtk_container_add(GTK_CONTAINER(hbox2), button[5]);
	gtk_container_add(GTK_CONTAINER(hbox2), button[6]);
	gtk_container_add(GTK_CONTAINER(hbox2), button[7]);
	gtk_container_add(GTK_CONTAINER(hbox3), button[8]);
	gtk_container_add(GTK_CONTAINER(hbox3), button[9]);
	gtk_container_add(GTK_CONTAINER(hbox3), button[10]);
	gtk_container_add(GTK_CONTAINER(hbox3), button[11]);
	gtk_container_add(GTK_CONTAINER(hbox4), button[12]);
	gtk_container_add(GTK_CONTAINER(hbox4), button[13]);
	gtk_container_add(GTK_CONTAINER(hbox4), button[14]);
	gtk_container_add(GTK_CONTAINER(hbox4), button[15]);
	for (i = 0; i < 16; i++)
	{
		g_signal_connect(G_OBJECT(button[i]), "clicked", G_CALLBACK(buttonClicked), NULL);
	}
	//add to vbox
	vbox = gtk_vbox_new(TRUE, 0);
	gtk_widget_set_size_request(vbox, 300, 400);
	gtk_container_add(GTK_CONTAINER(vbox), hbox);
	gtk_container_add(GTK_CONTAINER(vbox), hbox1);
	gtk_container_add(GTK_CONTAINER(vbox), hbox2);
	gtk_container_add(GTK_CONTAINER(vbox), hbox3);
	gtk_container_add(GTK_CONTAINER(vbox), hbox4);
	gtk_container_add(GTK_CONTAINER(window), vbox);
	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}
