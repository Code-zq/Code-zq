//#include<iostream>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
//
//class Person {
//
//public:
//
//	Person(string name, int score) {
//
//		this->m_Name = name;
//		this->m_Score = score;
//
//		
//	}
//
//	string m_Name;
//	int m_Score;
//};
//
//void createPerson(vector<Person>& v) {
//	string nameSeed = "ABCDE";
//	for(int i = 0; i < 5; i++) {
//		
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		v.push_back(p);
//	}
//
//}
//
//void setScore(vector<Person>& v) {
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//
//		deque<int>d;
//		for (int i = 0; i < 10; i++) {
//
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		//排序
//		sort(d.begin(), d.end());
//
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//
//		int sum = 0;
//		for(deque<int>::iterator dit=d.begin();dit!=d.end();dit++){
//		
//			sum += (*dit);
//		}
//
//		int avg = sum / d.size();
//
//		//赋分
//
//		it->m_Score = avg;
//
//	}
//
//}
//
//
//void showScore(vector<Person>&v) {
//
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//
//		cout << "姓名： " << (*it).m_Name << "分数： " << (*it).m_Score << endl;
//	}
//
//}
//int main() {
//
//	srand((unsigned int)time(NULL));
//	//1.创建五位选手
//	vector<Person>v;
//	//存放选手容器
//	createPerson(v);
//
//	//测试输出
//
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//
//		cout << "姓名： " << (*it).m_Name << "分数： " << (*it).m_Age << endl;
//	}*/
//
//	//给五位选手打分
//
//	setScore(v);
//
//
//	showScore(v);
//	system("pause");
//	return 0;
//}
//
//
