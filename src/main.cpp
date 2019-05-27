#include <QApplication>
#include "mylistview.h"

int main (int argc, char *argv[]) {
	QApplication a(argc, argv);
	
	MyListView *view = new MyListView;
	view->show ();

	return a.exec();
}
