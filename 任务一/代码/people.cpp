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
	cout << "�������š��������Ա����䡢լ�硢�ֻ��绰��" << endl;
	cin >> num >> name >> sex >> age >> hometel >> phone;
}
void people::Add()
{
	cin >> num >> name >> sex >> age >> hometel >> phone;
}
void people::Check()
{
	cout << "��ţ�" << num << endl;
	cout << "������" << name << endl;
	cout << "�Ա�" << sex << endl;
	cout << "���䣺" << age << endl;
	cout << "լ�磺" << hometel << endl;
	cout << "�ֻ���" << phone << endl;
}
void people::Display()
{
	cout << "    " <<num<< "    " <<name<< "    " <<sex<< "    " <<age<< "    " <<hometel<< "    "<<phone << endl;
}