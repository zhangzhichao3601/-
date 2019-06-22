//main.cpp
// 简单通讯录程序
#include"people.h"
void main()
{
	cout << "请选择下面的一个项目:" << endl;
	cout << "                     1 创建" << endl;
	cout << "                     2 添加" << endl;
	cout << "                     3 查询" << endl;
	cout << "                     4 修改" << endl;
	cout << "                     5 删除" << endl;
	cout << "                     6 显示" << endl;
	cout << "                     7 文件导入" << endl;
	cout << "                     8 文件导出" << endl;
	cout << "                     9 退出" << endl;
	cout << "请选择：";

	char a;
	cin >> a;
	people P[N];

	for (int i = 0; i < N; i++)
	{
		P[i].flag = 0;
	}

	ifstream infile("f1.txt", ios::in);//以输入的方式打开文件
	if (!infile)
	{
		cerr << "open error!";
		exit(1);
	}

	ofstream outfile("f2.txt", ios::out);//已输出的方式打开文件
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
							cout << "请输入第" << i + 1 << "位添加的信息";
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
					cout << "按姓名（a）或手机号（b）查询：";
					cin >> m;
					if (m == 'a')
					{
						cout << "请输入查询的姓名：";
						cin >> name1;
						for (int i = 0; i < N; i++)
						{
							if (P[i].name == name1 &&P[i].flag == 1)
							{
								cout << "查询的信息为：";
								P[i].Check();
							}

						}
					}
					if (m == 'b')
					{
						cout << "请输入查询的手机号：";
						cin >> phone1;
						for (int i = 0; i < N; i++)
						{
							if (P[i].phone == phone1 &&P[i].flag == 1)
							{
								cout << "查询的信息为：";
								P[i].Check();
							}

						}
					}
		}; break;

		case '4':
		{
					string name1;
					cout << "请输入需修改条目的姓名：";
					cin >> name1;
					for (int i = 0; i < N; i++)
					{
						if (P[i].name == name1&& P[i].flag == 1)
						{
							cout << "请输入新信息（编号、姓名、性别、年龄、宅电、手机电话）";
							P[i].Add();
						}
					}
		}; break;

		case '5':
		{
					int num1;
					cout << "请输入删除的编号：";
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
					cout << "编号    " << "姓名    " << "性别    " << "年龄    " << "宅电    " << "手机" << endl;
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
		cout << "请选择：";
		cin >> a;
	}
	cout << "谢谢您的使用！谢谢支持！" << endl;
}
