#ifndef MY_LIST_VIEW_H
#define MY_LIST_VIEW_H

#include <QListView>
#include "mylistmodel.h"

class MyListView : public QListView {
public:
	MyListView ();
	~MyListView ();

private:
	MyListModel *model;
};

#endif
