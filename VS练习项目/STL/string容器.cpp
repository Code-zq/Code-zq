//#include<iostream>
//#include<string>
//using namespace std;
//
//
//void test01() {
//
//	//四种构造
//
//	string s1;//默认构造
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
//	//string 的赋值操作
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
//	//注意区别
//	string str7(10,'a');
//	str7.assign(10, 'a');
//	cout << str7 << endl;
//}
//
////字符串拼接
//void test03() {
//	string str1 = "我";
//
//	str1 += "爱玩游戏";
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
//	//（起始位置 长度）
//	str3.append(str2, 0, 3);
//	str3.append(str2, 4, 3);
//	cout << "str3=" << str3 << endl;
//}
//
//void test04() {
//
//	string str1 = "abcdefgde";
//	//默认从0开始 没有返回-1
//	int pos=str1.find("de");
//	cout << "pos=" << pos << endl;
//
//	//rfind 从右到左 找到的是后面的 find是左到右
//	int pos1 = str1.rfind("de");
//	cout << "pos1=" << pos1 << endl;
//
//
//}
////2.替换
//void test05() {
//	
//	string str1 = "abcdefg";
//	//从1-3字符的位置 替换为1111 全都替换
//	str1.replace(1, 3, "1111");
//	cout << "str1=" << str1 << endl;
//}
//
////字符串比较 ASC11对比
//
//void test06() {
//
//	string str1 = "zello";
//	string str2 = "hello";
//
//	if (str1.compare(str2) == 0) {
//		//比较相等 ascII码 一个一个字符对比
//		cout << "str1等于str2" << endl;
//	}
//	else if (str1.compare(str2) > 0) {
//		cout << "str1大于str2" << endl;
//	}
//	else {
//		cout << "str1小于str2" << endl;
//	}
//}
//
//void test07() {
//
//	string str1 = "hello world";
//
//	cout << "str1=" << str1 << endl;
//
//	//1.通过[]来访问
//	for (int i = 0; i < str1.size(); i++) {
//
//		cout << str1[i] << " ";
//	}
//	cout << endl;
//
//	//2.通过at来访问
//
//	for (int i = 0; i < str1.size(); i++) {
//
//		cout << str1.at(i) << " ";
//	}
//	cout << endl;
//	//修改单个字符
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
//	//初始位置 字符串
//	str.insert(1, "111");
//	cout << "str= " << str << endl;
//	//初始位置 长度
//	str.erase(1, 4);
//	cout << "str= " << str << endl;
//}
//
////截取子串
//void test09() {
//
//	string str = "abcdef";
//	//初始位置 长度
//	string subStr = str.substr(1, 3);
//	cout << "subStr= " << subStr << endl;
//
//	//从邮件地址中获取用户名信息
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
