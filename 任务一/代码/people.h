//people.h
#pragma once
#define N 3
#include<iostream>
#include <string>
#include<fstream>
using namespace std;
class people
{
public:
	int flag;
	int num;
	string name, sex;
	int age;
	int hometel;
	int phone;

	people(void);
	~people(void);

	void Set();
	void Add();
	void Check();
	void Display();
};
