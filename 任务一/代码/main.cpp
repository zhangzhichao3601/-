//main.cpp
// ��ͨѶ¼����
#include"people.h"
void main()
{
	cout << "��ѡ�������һ����Ŀ:" << endl;
	cout << "                     1 ����" << endl;
	cout << "                     2 ���" << endl;
	cout << "                     3 ��ѯ" << endl;
	cout << "                     4 �޸�" << endl;
	cout << "                     5 ɾ��" << endl;
	cout << "                     6 ��ʾ" << endl;
	cout << "                     7 �ļ�����" << endl;
	cout << "                     8 �ļ�����" << endl;
	cout << "                     9 �˳�" << endl;
	cout << "��ѡ��";

	char a;
	cin >> a;
	people P[N];

	for (int i = 0; i < N; i++)
	{
		P[i].flag = 0;
	}

	ifstream infile("f1.txt", ios::in);//������ķ�ʽ���ļ�
	if (!infile)
	{
		cerr << "open error!";
		exit(1);
	}

	ofstream outfile("f2.txt", ios::out);//������ķ�ʽ���ļ�
	if (!outfile)
	{
		cerr << "open error!";
		exit(1);
	}

	while (a != '9')
	{
		switch (a)
		{
		case '1':
		{

					for (int i = 0; i<N; i++)
					{
						P[i].Set();
						P[i].flag = 1;
						break;
					}

		}; break;

		case '2':
		{
					for (int i = 0; i<N; i++)
					{
						if (P[i].flag == 0)
						{
							cout << "�������" << i + 1 << "λ��ӵ���Ϣ";
							P[i].Add();
							P[i].flag = 1;
							break;
						}
					}
		}; break;

		case '3':
		{
					string name1;
					int phone1;
					char m;
					cout << "��������a�����ֻ��ţ�b����ѯ��";
					cin >> m;
					if (m == 'a')
					{
						cout << "�������ѯ��������";
						cin >> name1;
						for (int i = 0; i < N; i++)
						{
							if (P[i].name == name1 &&P[i].flag == 1)
							{
								cout << "��ѯ����ϢΪ��";
								P[i].Check();
							}

						}
					}
					if (m == 'b')
					{
						cout << "�������ѯ���ֻ��ţ�";
						cin >> phone1;
						for (int i = 0; i < N; i++)
						{
							if (P[i].phone == phone1 &&P[i].flag == 1)
							{
								cout << "��ѯ����ϢΪ��";
								P[i].Check();
							}

						}
					}
		}; break;

		case '4':
		{
					string name1;
					cout << "���������޸���Ŀ��������";
					cin >> name1;
					for (int i = 0; i < N; i++)
					{
						if (P[i].name == name1&& P[i].flag == 1)
						{
							cout << "����������Ϣ����š��������Ա����䡢լ�硢�ֻ��绰��";
							P[i].Add();
						}
					}
		}; break;

		case '5':
		{
					int num1;
					cout << "������ɾ���ı�ţ�";
					cin >> num1;
					for (int i = 0; i < N; i++)
					{
						if (P[i].num == num1)
						{
							P[i].flag = 0;

						}
					}
		}; break;

		case '6':
		{
					cout << "���    " << "����    " << "�Ա�    " << "����    " << "լ��    " << "�ֻ�" << endl;
					for (int i = 0; i < N; i++)
					{
						if (P[i].flag == 1)
						{
							P[i].Display();
						}
					}
		};break;

		case '7':
		{
					int m = 0;
					string n;
					for (int i = 0; i < 24; i++)
					{
						if (m % 6 == 0) cout << endl;
						infile >> n;
						cout << n << "    ";
						m++;
					}
					infile.close();
		}; break;

		case '8':
		{
					for (int i = 0; i < N; i++)
					{
						outfile << P[i].num << "    " << P[i].name << "    " << P[i].sex << "    " << P[i].age << "    " << P[i].hometel << "    " << P[i].phone << endl;
					}
					outfile.close();
		}; break;



		}
		cout << "��ѡ��";
		cin >> a;
	}
	cout << "лл����ʹ�ã�лл֧�֣�" << endl;
}
