#include "mylistview.h"

MyListView::MyListView () {
	this->model = new MyListModel;
	this->setModel (this->model);
	this->setRootIndex (this->model->index (this->model->rootPath()));
}

MyListView::~MyListView () {
	delete this->model;
}
