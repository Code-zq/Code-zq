#include <iostream>
#include <vector>
#include <map>
#include <ctime>   // for time
using namespace std;

#define cs 1
#define ms 2
#define yf 3

class Worker {
public:
    string m_Name;
    int m_Salary;
};

void createWorker(vector<Worker> &v) {
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++) {
        Worker worker;
        worker.m_Name = "Ա��";
        worker.m_Name += nameSeed[i];
        worker.m_Salary = rand() % 3000 + 3000; // ���нˮ
        v.push_back(worker); // ��������
    }
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
    for (const Worker& worker : v) { // ʹ�÷�Χ���ڵ� for ѭ��
        int depId = rand() % 3 + 1; // ������ű��
        m.insert(make_pair(depId, worker)); // ���벿�ű�ź�Ա��
    }
}

void showGroup(const multimap<int, Worker>& m) { // ʹ�� const ����
    cout << "cs���ţ�" << endl;

    // ���ҵ�һ�� cs ���ŵ�Ա��
    auto pos = m.find(cs);

    // ���û���ҵ��������ʾ��Ϣ
    if (pos == m.end()) {
        cout << "û���ҵ� cs ���ŵ�Ա����" << endl;
        return;
    }

    // ����ò��ŵ�Ա������
    int count = m.count(cs);
    for (int index = 0; index < count; ++index) {
        cout << "������ " << pos->second.m_Name
            << " нˮ �� " << pos->second.m_Salary << endl;
        ++pos; // �ƶ�����һ��Ԫ��
    }
    cout << "ms���ţ�" << endl;

    // ���ҵ�һ�� cs ���ŵ�Ա��
    auto pos1 = m.find(ms);

    // ���û���ҵ��������ʾ��Ϣ
    if (pos1 == m.end()) {
        cout << "û���ҵ� cs ���ŵ�Ա����" << endl;
        return;
    }
    int count1 = m.count(ms);
    for (int index = 0; index < count1; ++index) {
        cout << "������ " << pos1->second.m_Name
            << " нˮ �� " << pos1->second.m_Salary << endl;
        ++pos1; // �ƶ�����һ��Ԫ��
    }
    cout << "yf���ţ�" << endl;

   
    auto pos2 = m.find(yf);

    // ���û���ҵ��������ʾ��Ϣ
    if (pos2 == m.end()) {
        cout << "û���ҵ� yf ���ŵ�Ա����" << endl;
        return;
    }
    int count2 = m.count(yf);
    for (int index = 0; index < count2; ++index) {
        cout << "������ " << pos2->second.m_Name
            << " нˮ �� " << pos2->second.m_Salary << endl;
        ++pos2; // �ƶ�����һ��Ԫ��
    }
}

int main() {
     

    // ����Ա��
    vector<Worker> v;
    createWorker(v);

    //����
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {

        cout << "������ " << it->m_Name << " нˮ��  " << it->m_Salary << endl;
    }

     //Ա������
    multimap<int, Worker> m;
    setGroup(v, m);
    showGroup(m);

    system("pause");
    return 0;
}