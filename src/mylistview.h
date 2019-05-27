#ifndef MY_LIST_VIEW_H
#define MY_LIST_VIEW_H

/**
 * @file mylistview.h
 * @brief 自定义视图类
 */ 

#include <QListView>
#include "mylistmodel.h"

/**
 * @brief 自定义视图类
 * @details 继承自QListView
 */ 
class MyListView : public QListView {
public:
	MyListView ();
	~MyListView ();

private:

	MyListModel *model;/**< MyListView的私有成员 (用 "/**<" 在该行后注释,用@see做跳转) 
	@see MyListModel */
};

#endif
