#pragma once
#include<iostream>
#include "Identity.h"
#include<vector>
#include"Student.h"
#include"Teacher.h"
#include"computerRoom.h"
using namespace std;

class Manager :public Identity {


public:

	Manager();


	Manager(string name, string pwd);

	virtual void operMenu();

	void addPerson();

	void showPerson();

	void showComputer();

	void cleanFile();

	void initVector();

	vector<Student> vStu;

	vector<Teacher> vTea;

	bool checkRepeat(int id, int type);

	vector<ComputerRoom> vCom;


};
