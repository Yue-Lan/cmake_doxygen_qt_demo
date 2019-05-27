#ifndef MY_LIST_MODEL_H
#define MY_LIST_MODEL_H

/**
 * @file mylistmodel.h
 * @brief 列表视图所用模型
 * @details 继承自QFileSystemModel
 */ 

#include <QFileSystemModel>

/**
 * @brief 文件系统模型
 * @details Qt的Model/View模式非常的强大，QFileSystemModel则是典型的代表，
 * 它不仅提供数据，内部还实现了同步监听机制。
 * Gtk虽然也有GDir可以和GTreeModel可以连用到GtkIconView，但不论是View还是Model，
 * 都没有Qt提供的完善和易用。
 */ 
class MyListModel : public QFileSystemModel {
public:
	MyListModel ();
};

#endif
