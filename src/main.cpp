#include <QApplication>
#include "mylistview.h"

/**
 * @file main.cpp
 * @brief 包含main函数的文件
 * @details 它运行了一个QApplication，用来展示一个文件列表视图
 * @author Yue Lan
 * @email lanyue@kylinos.cn
 * @date 2019年5月27日
 */ 

///this is the main entry of program. (单行注释: ///)
/**
* @brief 主函数
* @details 程序唯一入口
*
* @param argc 命令参数个数
* @param argv 命令参数指针数组
* @return 程序执行成功与否
*     @retval 0 程序执行成功
*     @retval 1 程序执行失败
* @note 这里只是一个简单的例子
*/
int main (int argc, char *argv[]) {
	QApplication a(argc, argv);
	
	///create a new list view. (单行注释: ///)
	MyListView *view = new MyListView;
	view->show ();

	return a.exec();
}
