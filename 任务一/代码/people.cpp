//people.cpp
#include "people.h"
people::people(void)
{
}
people::~people(void)
{
}

void people::Set()
{
	cout << "请输入编号、姓名、性别、年龄、宅电、手机电话：" << endl;
	cin >> num >> name >> sex >> age >> hometel >> phone;
}
void people::Add()
{
	cin >> num >> name >> sex >> age >> hometel >> phone;
}
void people::Check()
{
	cout << "编号：" << num << endl;
	cout << "姓名：" << name << endl;
	cout << "性别：" << sex << endl;
	cout << "年龄：" << age << endl;
	cout << "宅电：" << hometel << endl;
	cout << "手机：" << phone << endl;
}
void people::Display()
{
	cout << "    " <<num<< "    " <<name<< "    " <<sex<< "    " <<age<< "    " <<hometel<< "    "<<phone << endl;
}