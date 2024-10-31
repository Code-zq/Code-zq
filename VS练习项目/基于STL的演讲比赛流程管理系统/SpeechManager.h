

#pragma once
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<deque>
#include<functional>
#include<fstream>
#include"Speaker.h"
#include<numeric>
using namespace std;

class SpeechManager {

public:

	SpeechManager();

	void show_Menu();

	void ExitSystem();

	void initSpeech();

	vector<int>v1;//12


	vector<int>v2;//6

	vector<int>vVictory;//3

	map <int, Speaker> m_Speaker;

	int m_Index;

	void createSpeaker();

	void startSpeech();

	void speechDraw();

	void speechContest();

	void showScore();

	void saveScore();

	//��ȡ��¼
	void loadRecord();

	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>>m_Record;
	//����  csv

	void showRecord();

	void clearRecord();

	~SpeechManager();
};