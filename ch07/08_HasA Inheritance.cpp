#include <iostream>
#include<cstring>

using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum):bullet(bnum)
	{	}
	
	void shot()
	{
		cout << "BBang!!" << endl;
		bullet--;
	}
};

class Police :public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

};

int main()
{
	Police pman(5, 3);//number of bullet,handcuffs
	pman.shot();
	pman.PutHandcuff();



}

