//#include<iostream>
//#include<string>
//using namespace std;
//
//
//void test01() {
//
//	//���ֹ���
//
//	string s1;//Ĭ�Ϲ���
//
//	const char* str = "hello";
//
//	string s2(str);
//	cout << "s2=" << s2 << endl;
//	
//	string s3(s2);
//	cout << "s3=" << s3 << endl;
//
//	string s4(10,'a');
//	cout << s4 << endl;
//}
//
//void test02() {
//	//string �ĸ�ֵ����
//
//	string str1;
//	str1 = "hello";
//	cout << str1 << endl;
//
//
//	string str2;
//	str2 = str1;
//	cout << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << str3 << endl;
//
//	string str4;
//	str4.assign("hello1");
//	cout << str4 << endl;
//
//	string str5;
//	str5.assign("hello", 3);
//	cout << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << str6 << endl;
//
//	//ע������
//	string str7(10,'a');
//	str7.assign(10, 'a');
//	cout << str7 << endl;
//}
//
////�ַ���ƴ��
//void test03() {
//	string str1 = "��";
//
//	str1 += "������Ϸ";
//	cout << "str1=" << str1 << endl;
//
//	str1 += ':';
//	cout << "str1=" << str1 << endl;
//
//	string str2 = "LOL DNF";
//
//	str1 += str2;
//	cout << str1 << endl;
//
//	string str3 = "I";
//	str3.append("love ");
//	cout << "str3=" <<str3<< endl;
//
//	str3.append("game aceeae", 4);
//	cout << "str3=" << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3=" << str3 << endl;
//	//����ʼλ�� ���ȣ�
//	str3.append(str2, 0, 3);
//	str3.append(str2, 4, 3);
//	cout << "str3=" << str3 << endl;
//}
//
//void test04() {
//
//	string str1 = "abcdefgde";
//	//Ĭ�ϴ�0��ʼ û�з���-1
//	int pos=str1.find("de");
//	cout << "pos=" << pos << endl;
//
//	//rfind ���ҵ��� �ҵ����Ǻ���� find������
//	int pos1 = str1.rfind("de");
//	cout << "pos1=" << pos1 << endl;
//
//
//}
////2.�滻
//void test05() {
//	
//	string str1 = "abcdefg";
//	//��1-3�ַ���λ�� �滻Ϊ1111 ȫ���滻
//	str1.replace(1, 3, "1111");
//	cout << "str1=" << str1 << endl;
//}
//
////�ַ����Ƚ� ASC11�Ա�
//
//void test06() {
//
//	string str1 = "zello";
//	string str2 = "hello";
//
//	if (str1.compare(str2) == 0) {
//		//�Ƚ���� ascII�� һ��һ���ַ��Ա�
//		cout << "str1����str2" << endl;
//	}
//	else if (str1.compare(str2) > 0) {
//		cout << "str1����str2" << endl;
//	}
//	else {
//		cout << "str1С��str2" << endl;
//	}
//}
//
//void test07() {
//
//	string str1 = "hello world";
//
//	cout << "str1=" << str1 << endl;
//
//	//1.ͨ��[]������
//	for (int i = 0; i < str1.size(); i++) {
//
//		cout << str1[i] << " ";
//	}
//	cout << endl;
//
//	//2.ͨ��at������
//
//	for (int i = 0; i < str1.size(); i++) {
//
//		cout << str1.at(i) << " ";
//	}
//	cout << endl;
//	//�޸ĵ����ַ�
//
//	str1[0] = 'x';
//	cout << str1 << endl;
//
//	str1.at(2) = 'a';
//	cout << str1 << endl;
//}
//
//void test08() {
//	
//	string str = "hello";
//	//��ʼλ�� �ַ���
//	str.insert(1, "111");
//	cout << "str= " << str << endl;
//	//��ʼλ�� ����
//	str.erase(1, 4);
//	cout << "str= " << str << endl;
//}
//
////��ȡ�Ӵ�
//void test09() {
//
//	string str = "abcdef";
//	//��ʼλ�� ����
//	string subStr = str.substr(1, 3);
//	cout << "subStr= " << subStr << endl;
//
//	//���ʼ���ַ�л�ȡ�û�����Ϣ
//
//	string  email = "zhangsan11@qq,com";
//	
//	int pos = email.find("@");
//	cout << pos << endl;
//
//	string usrName = email.substr(0, pos);
//	cout << "usrName= " << usrName << endl;
//
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	test06();
//	test07();
//	test08();
//	test09();
//	system("pause");
//	return 0;
//}
//
//
