#include <gtk/gtk.h>


GtkWidget *window;
GtkWidget *vbox;
GtkWidget *hbox;
GtkWidget *label1,*label2,*label3;

char buf[100];
int numLevel = 0;
int numHeart = 0;


int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

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

	//button


	vbox = gtk_vbox_new(TRUE,0);
        gtk_widget_set_size_request(vbox,300,500);

	//
	gtk_container_add(GTK_CONTAINER(window), hbox);

	gtk_widget_show_all(window);

	gtk_main();
	return 0;
}
