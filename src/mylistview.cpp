#include "mylistview.h"

/**
 * @brief 构造函数
 * @details 他主要new了一个MyListModel，并且通过父类的setModel和setRootIndex方法，
 * 将显示的目录设置为"/usr/share"
 * ____这是在cpp文件中的注释 
 */ 
MyListView::MyListView () {
	this->model = new MyListModel;
	this->setModel (this->model);
	this->setRootIndex (this->model->index (this->model->rootPath()));
}

MyListView::~MyListView () {
	delete this->model;
}
