#pragma once
#include<iostream>
#include<vector>
#include"computerRoom.h"
#include "Identity.h"
#include"OrderFile.h"
using namespace std;

class Student :public Identity {


public:

	Student();


	Student(int id, string name, string pwd);

	virtual void operMenu();

	void applyOrder();

	void showMyOrder();

	void showAllOrder();

	void cancelOrder();

	int m_Id;

	//机房信息容器
	vector<ComputerRoom>vcom;



};
