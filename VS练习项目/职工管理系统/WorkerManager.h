#pragma once
#include<iostream>
#include<fstream>
#define FILENAME "empFile.txt"
#include"Worker.h"
using namespace std;

class WorkerManager {

public:
	//��¼�ļ��е���������
	int m_EmpNum;
	
	//Ա�������ָ�� ָ��ָ���ָ��
	Worker ** m_EmpArray;
	
	WorkerManager() ;

	void  Show_Menu();

	
	void ExitSystem();

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//���ļ��ж��ļ��Ƿ�Ϊ��

	bool m_FileIsEmpty;

	//��ȡ���������

	int get_EmpNum();

	//��ʼ��Ա�� ���ļ���ʾ����Ļ
	
	void init_Emp();

	//��ʾְ��
	
	void show_Emp();

	//ɾ��Ա��

	void Del_Emp();

	//�ж�ְ���Ƿ����

	int IsExist(int id);

	//�޸�ְ��

	void Mod_Emp();


	//����ְ��
	void Find_Emp();

	//����Ա��

	void Sort_Emp();

	//����ļ�

	void Clean_File();

	
	~WorkerManager() ;
};