#include<iostream>
#include<cstring>

using namespace std;

class Computer
{
private:
	char owner[50];

public:
	Computer(const char* name)
	{
		strcpy(owner, name);
	}
	void Calculate()
	{
		cout << "��û ������ �����մϵ�" << endl;
	}

};

class NotebookComp : public Computer
{
private:
	int Battery;
public:
	NotebookComp(const char* name, int initChang) :Computer(name), Battery(initChang)
	{}

	void Changing() { Battery += 5; }
	void UseBattery() { Battery -= 1;}
	void Moving()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "need to Charg.." << endl;
			return;
		}
		cout << "Moning.. ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() { return Battery; }
};

class TabletNotbook : public NotebookComp
{
private:
	char regstPenModel[50];
public:
	TabletNotbook(const char* name, int initChag, const char* pen) : NotebookComp(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}
	void Write(const char* penInfo)
	{
		if (GetBatteryInfo()<1)
		{
			cout << "need to Charg.." << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "Not regst Pen..";
			return;
		}
		cout << "�� ������ ó���մϴ�" << endl;
		UseBattery();
	}

	

};

int main(void)
{

	NotebookComp nc("�̼���", 5);
	TabletNotbook tn("������", 5, "ISE-241-242");
	nc.Moving();
	tn.Write("ISE-241-242");

	return 0;
}