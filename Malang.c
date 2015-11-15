#include <gtk/gtk.h>

GtkWidget *window;
GtkWidget *vbox;
GtkWidget *hbox;
GtkWidget *label1,*label2,*label3;
GtkWidget *hbox1, *hbox2, *hbox3, *hbox4;
GtkWidget *button[16];

char buf[10];
int numLevel = 0;
int numHeart = 0;
int question = 0;

int timer_handler(gpointer data)//make question
{
	int min = 0;
	int sec = 0;
	int i=0;

	for(i=0;i<5;i++)
	{
	question = rand() % 10;  //rand question ( 0~9)
	buf[i]=question+'0';
	buf[i+1] =' ';
	i++;
	}
	gtk_label_set_text(GTK_LABEL(label2),buf);
}


int main(int argc, char *argv[])
{
	g_timeout_add(1000, timer_handler, 0); //1 seconed

	srand(time(0));
	//int i=0;
	//for(i=0;i<3;i++)
	//{
	//question = rand() %16;
	//buf[i]=question;
	//}
	gtk_init(&argc, &argv);

	//window setup
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	//label UI
	hbox = gtk_hbox_new(TRUE,0);
	gtk_widget_set_size_request(hbox,300,60);
	label1 = gtk_label_new("Level");
	gtk_widget_set_size_request(label1,100,20);

	label2 =gtk_label_new("Correct!");
	gtk_widget_set_size_request(label2,100,20);

	label3 =gtk_label_new("Life");
	gtk_widget_set_size_request(label2,100,20);

	gtk_container_add(GTK_CONTAINER(hbox),label1);
	gtk_container_add(GTK_CONTAINER(hbox),label2);
	gtk_container_add(GTK_CONTAINER(hbox),label3);

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

	for (i = 0; i<16; i++)
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

	//add to vbox
	vbox = gtk_vbox_new(TRUE,0);
        gtk_widget_set_size_request(vbox,300,400);

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
