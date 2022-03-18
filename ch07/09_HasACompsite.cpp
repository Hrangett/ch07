#include<iostream>
#include<cstring>
using namespace std;

class Gun
{
private:
	int bullet;//장정된 총알의 수

public:
	Gun(int bnum) : bullet(bnum){}
	void Shot()
	{
		cout << "BBang!!" << endl;
		bullet--;
		cout << "\tLeft bullet..." << bullet << endl;
	}

};

class Police
{
private:
	int handcuffs;	// 수갑수
	Gun* pistol; //소유하고있는 권총                          

public:
	Police(int bnum, int bcuff) : handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum);// 총알을..장전..!
		else
			pistol = NULL;
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;

	}
	void Shot()
	{
		if (pistol == NULL)
			cout << "BBANG..?" << endl;
		else
			pistol->Shot();
	}
	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}
	
};

int main()
{
	Police pman1(5, 3);
	pman1.Shot();

	pman1.PutHandcuff();

	Police pman2(0, 3);
	pman2.Shot();
	pman2.PutHandcuff();
}