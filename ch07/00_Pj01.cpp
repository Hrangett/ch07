#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;

public:


	Car(int ga) : gasolineGauge(ga)
	{
		cout << "Car ������.." << endl;
	}
	//~Car();

	int GetGasGage()
	{
		return gasolineGauge;
	}

};

class HybridCar :public Car
{
private:
	int electricGauge;
public:
	HybridCar(int Hy, int C):electricGauge(Hy),Car(C)
	{
		cout << "���̺긮�� ��,," << endl;
	}

	int GetElecGaufe()
	{
		return electricGauge;
	}

};


class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:

	HybridWaterCar(int wat, int Hy, int Car) : HybridCar(Hy, Car), waterGauge(wat)
	{
		cout << "�m��ī..?" << endl;
	}
	//~HybridWaterCar();

	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ� : " << GetGasGage() << endl;
		cout << "�ܿ� ���ⷮ : " << GetElecGaufe() << endl;
		cout << "�ܿ� ���ͷ� : " << waterGauge << endl;
	}


};

int main()
{
	HybridWaterCar hbwc1(1, 2, 3);
	hbwc1.ShowCurrentGauge();
}