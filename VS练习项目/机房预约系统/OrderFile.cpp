#include"OrderFile.h"
#include"global.h"
#include<fstream>
OrderFile::OrderFile() {

	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;
	string interval;
	string stuId;
	string stuName;
	string roomId;
	string status;



	this->m_Size = 0;

	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status) {

		//cout << date << endl;

		string key;
		string value;
		map<string, string>m;

		//date:1  4
		int pos = date.find(":");
		if (pos != -1) {

			key = date.substr(0, pos);
			value = date.substr(pos + 1, date.size() - pos - 1);

			m.insert(make_pair(key, value));
			/*cout << key << endl;
			cout << value << endl;*/
		}

		pos = interval.find(":");
		if (pos != -1) {

			key = interval.substr(0, pos);
			value = interval.substr(pos + 1, interval.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		pos = stuId.find(":");
		if (pos != -1) {

			key = stuId.substr(0, pos);
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		pos = stuName.find(":");
		if (pos != -1) {

			key = stuName.substr(0, pos);
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		pos = roomId.find(":");
		if (pos != -1) {

			key = roomId.substr(0, pos);
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		pos = status.find(":");
		if (pos != -1) {

			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		

		this->m_orderDate.insert(make_pair(this->m_Size, m));
		this->m_Size++;
		
	}
	//cout << this->m_Size << endl;
	ifs.close();

	

	//将小map容器放入大的map容器


	

	
	//测试最大的map容器
	/*for (map<int, map<string, string>>::iterator it = m_orderDate.begin();it!=m_orderDate.end();it++) {

		
		cout << "条数为：" << it->first <<"  value="<< endl;

		for (map<string, string>::iterator mit = (*it).second.begin(); mit != (*it).second.end(); mit++) {

			cout << "  key=" << mit->first << "  value=" << mit->second << " ";
		}
		cout << endl;
	}*/
}


 
void OrderFile::updateOrder() {
	//容器放到文件
	if (this->m_Size == 0) {

		return;
	}

	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);

	for (int i = 0; i < m_Size; i++) {

		ofs << "data:" << this->m_orderDate[i]["data"] << " ";
		ofs << "inerval:" << this->m_orderDate[i]["inerval"] << " ";
		ofs << "stuId:" << this->m_orderDate[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderDate[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderDate[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderDate[i]["status"] << endl;
		

	}
	ofs.close();
}