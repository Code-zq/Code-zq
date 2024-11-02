#pragma once
#include<iostream>
#include<map>

using namespace std;

class OrderFile {

public:

	OrderFile();

	void updateOrder();

	//记录的条数  data 1 value 2

	map<int, map<string, string>> m_orderDate;

	//预约条数
	int m_Size;

};