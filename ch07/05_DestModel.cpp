#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;

public:
	Person(const char* myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person()
	{
		cout << "ºÎ¸ð ¼Ò¸êÀÚ.." << endl;

		delete[]name;
	}

	void WhatYourName() const
	{
		cout << "MY NAME IS " << name << endl;
	}
};

class UnivStdent: public Person
{
private:
	char* major;
public:
	UnivStdent(const char* myname, const char* mymajor) : Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStdent()
	{
		cout << "ÀÚ½Ä ¼Ò¸êÀÚ.." << endl;
		delete[]major;
	}

	void WhoAreU()const
	{
		WhatYourName();
		cout << "MY major is " << major << endl << endl;
	}

};

int main()
{
	UnivStdent std1("Kun", "Mathematics");
	std1.WhoAreU();

	UnivStdent std2("Hong", "Physic");
	std2.WhoAreU();

}