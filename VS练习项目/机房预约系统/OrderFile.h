#pragma once
#include<iostream>
#include<map>

using namespace std;

class OrderFile {

public:

	OrderFile();

	void updateOrder();

	//��¼������  data 1 value 2

	map<int, map<string, string>> m_orderDate;

	//ԤԼ����
	int m_Size;

};