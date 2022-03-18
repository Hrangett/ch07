#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage)
	{
		cout << "�θ� Ŭ���� ������" << endl;
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou()const
	{
		cout << "I'm " << age << " years old" << endl;
	}

};

class UnivStudent : public Person
{
private:
	char major[50];

public:
	UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myage, myname)
	{
		cout << "�ڽ�Ŭ���� ������" << endl;      
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "MY NAME IS " << major << endl << endl;
	}

};

int main()
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng");
	ustd2.WhoAreYou();
}