#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase(int n) :baseNum(n)
	{
		cout << "SoBase(int n) :" << baseNum << endl;
	}
	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;

public:
	SoDerived(int n) : SoBase(n), derivNum(n)
	{
		cout << "SoDerived(int n) :" << derivNum << endl;

	}
	~SoDerived()
	{
		cout << "~SoDerived(int n) :" << derivNum << endl;

	}

};

int main()
{
	
	SoDerived drv1(15);
	SoDerived drv2(27);
	
	return 0;
}

