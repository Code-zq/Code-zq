#include<iostream>
#include"Speaker.h"
#include"SpeechManager.h"
#include<ctime>
using namespace std;

int main() {

	SpeechManager sm;

	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++) {

	//	cout << it->first << it->second.m_Name << it->second.m_Score[0]<< endl;
	//}
	srand((unsigned int)time(NULL));
	int choice = 0;
	while (true) {

		sm.show_Menu();
		cout << "请输入你的选项： " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			sm.startSpeech();
			break;
		case 2:
			sm.showRecord();
			break;
		case 3:
			sm.clearRecord();
			break;
		case 0:
			sm.ExitSystem();
			break;

		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}


