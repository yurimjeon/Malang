#include <gtk/gtk.h>


GtkWidget *window;
GtkWidget *vbox;
GtkWidget *label;


int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	vbox = gtk_vbox_new(TRUE,0);
	label = gtk_label_new("Malang start");
	gtk_widget_set_size_request(label,100,50);

	gtk_container_add(GTK_CONTAINER(vbox),label);
	gtk_container_add(GTK_CONTAINER(window), vbox);

	gtk_widget_show_all(window);

	gtk_main();
	return 0;
}
