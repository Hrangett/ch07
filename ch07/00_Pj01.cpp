#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;

public:


	Car(int ga) : gasolineGauge(ga)
	{
		cout << "Car 생성자.." << endl;
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
		cout << "하이브리드 최,," << endl;
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
		cout << "웟터카..?" << endl;
	}
	//~HybridWaterCar();

	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린 : " << GetGasGage() << endl;
		cout << "잔여 전기량 : " << GetElecGaufe() << endl;
		cout << "잔여 워터량 : " << waterGauge << endl;
	}


};

int main()
{
	HybridWaterCar hbwc1(1, 2, 3);
	hbwc1.ShowCurrentGauge();
}