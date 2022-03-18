#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class SoBase
{
private:
	int baseNum;

public:
	SoBase() :baseNum(20)
	{
		cout << "SoBase()" << endl;
	}
	SoBase(int n) :baseNum(n)
	{
		cout << "SoBace(int n)" << endl;
	}

	void ShowBaseData()
	{
		cout << baseNum << endl;
	}

};

class SoDerived : public SoBase
{
private:
	int derivNum;

public:
	SoDerived() :derivNum(30)
	{
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) :derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void)
{
	cout << "case1...." << endl;
	SoDerived dr1;//인자를 받지않는 객체 생성
	dr1.ShowDerivData();
	cout << "---------------------" << endl;

	cout << "case2...." << endl;
	SoDerived dr2(12);//인자 1개 받는 object creat
	dr2.ShowDerivData();
	cout << "---------------------" << endl;

	cout << "case3...." << endl;
	SoDerived dr3(23, 24);//two value 
	dr3.ShowDerivData();
	cout << "---------------------" << endl;

}