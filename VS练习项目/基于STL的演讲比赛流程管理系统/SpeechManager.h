

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

	//读取记录
	void loadRecord();

	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>>m_Record;
	//届数  csv

	void showRecord();

	void clearRecord();

	~SpeechManager();
};