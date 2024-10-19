#pragma once
#include<iostream>
#include<fstream>
#define FILENAME "empFile.txt"
#include"Worker.h"
using namespace std;

class WorkerManager {

public:
	//记录文件中的人数个数
	int m_EmpNum;
	
	//员工数组的指针 指向指针的指针
	Worker ** m_EmpArray;
	
	WorkerManager() ;

	void  Show_Menu();

	
	void ExitSystem();

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//读文件判断文件是否为空

	bool m_FileIsEmpty;

	//获取保存的数据

	int get_EmpNum();

	//初始化员工 读文件显示到屏幕
	
	void init_Emp();

	//显示职工
	
	void show_Emp();

	//删除员工

	void Del_Emp();

	//判断职工是否存在

	int IsExist(int id);

	//修改职工

	void Mod_Emp();


	//查找职工
	void Find_Emp();

	//排序员工

	void Sort_Emp();

	//清空文件

	void Clean_File();

	
	~WorkerManager() ;
};