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
        worker.m_Name = "员工";
        worker.m_Name += nameSeed[i];
        worker.m_Salary = rand() % 3000 + 3000; // 随机薪水
        v.push_back(worker); // 放入容器
    }
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
    for (const Worker& worker : v) { // 使用范围基于的 for 循环
        int depId = rand() % 3 + 1; // 随机部门编号
        m.insert(make_pair(depId, worker)); // 插入部门编号和员工
    }
}

void showGroup(const multimap<int, Worker>& m) { // 使用 const 引用
    cout << "cs部门：" << endl;

    // 查找第一个 cs 部门的员工
    auto pos = m.find(cs);

    // 如果没有找到，输出提示信息
    if (pos == m.end()) {
        cout << "没有找到 cs 部门的员工。" << endl;
        return;
    }

    // 计算该部门的员工数量
    int count = m.count(cs);
    for (int index = 0; index < count; ++index) {
        cout << "姓名： " << pos->second.m_Name
            << " 薪水 ： " << pos->second.m_Salary << endl;
        ++pos; // 移动到下一个元素
    }
    cout << "ms部门：" << endl;

    // 查找第一个 cs 部门的员工
    auto pos1 = m.find(ms);

    // 如果没有找到，输出提示信息
    if (pos1 == m.end()) {
        cout << "没有找到 cs 部门的员工。" << endl;
        return;
    }
    int count1 = m.count(ms);
    for (int index = 0; index < count1; ++index) {
        cout << "姓名： " << pos1->second.m_Name
            << " 薪水 ： " << pos1->second.m_Salary << endl;
        ++pos1; // 移动到下一个元素
    }
    cout << "yf部门：" << endl;

   
    auto pos2 = m.find(yf);

    // 如果没有找到，输出提示信息
    if (pos2 == m.end()) {
        cout << "没有找到 yf 部门的员工。" << endl;
        return;
    }
    int count2 = m.count(yf);
    for (int index = 0; index < count2; ++index) {
        cout << "姓名： " << pos2->second.m_Name
            << " 薪水 ： " << pos2->second.m_Salary << endl;
        ++pos2; // 移动到下一个元素
    }
}

int main() {
     

    // 创建员工
    vector<Worker> v;
    createWorker(v);

    //测试
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {

        cout << "姓名： " << it->m_Name << " 薪水：  " << it->m_Salary << endl;
    }

     //员工分组
    multimap<int, Worker> m;
    setGroup(v, m);
    showGroup(m);

    system("pause");
    return 0;
}