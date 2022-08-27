#include <iostream>
#include <cstring>
using namespace std;

/*
//문제 1번 
class Car{
private:
	int gasolineGauge;
public:
	Car(int g) : gasolineGauge(g){
		
	}
	int GetGasGauge(){
		return gasolineGauge;
	}
};

class HybridCar :public Car{
private:
	int electricGauge;
public:
	HybridCar(int g) : Car(g), electricGauge(0){
	}
	HybridCar(int g, int g1) : Car(g), electricGauge(g1){
		
	}
	int GetElecGauge(){
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar{
private :
	int waterGauge;
public:
	HybridWaterCar(int g) : HybridCar(g),waterGauge(0){
		
	}
	HybridWaterCar(int g, int g1) : HybridCar(g,g1),waterGauge(0){
		
	}
	HybridWaterCar(int g, int g1,int g2) : HybridCar(g,g1), waterGauge(g2){
		
	}
	void ShowCurrentGauge(){
		cout<<"잔여 가솔린 : "<<GetGasGauge()<<endl;
		cout<<"잔여 전기량 : "<<GetElecGauge()<<endl;
		cout<<"잔여 워터량 : "<<waterGauge<<endl;
	}
};

int main(void){
	HybridWaterCar hwc;
	hwc.ShowCurrentGauge();
	cout<<endl;
	HybridWaterCar hwc1(10);
	hwc1.ShowCurrentGauge();
	cout<<endl;
	HybridWaterCar hwc2(10,20);
	hwc2.ShowCurrentGauge();
	cout<<endl;
	HybridWaterCar hwc3(10,20,30);
	hwc3.ShowCurrentGauge();

	return 0;
} 
*/

/*
//문제 2번
class MyFriendInfo{
private:
	char *name;
	int age;
public:
	MyFriendInfo(char *fname, int fage) : age(fage){
		name = new char[strlen(fname)+1];
		strcpy(name,fname);
	}
	void ShowMyFriendInfo(){
		cout<<"이름 : "<<name<<endl;
		cout<<"나이 : "<<age<<endl;
	}
	~MyFriendInfo(){
		delete []name;
	}
}; 

class MyFriendDetailInfo : public MyFriendInfo{
private:
	char *addr;
	char *phone;
public:
	MyFriendDetailInfo(char *fname, int fage, char *faddr, char *fphone) : MyFriendInfo(fname, fage){
		addr = new char[strlen(faddr)+1];
		phone = new char[strlen(fphone)+1];
		strcpy(addr,faddr);
		strcpy(phone,fphone);
	}
	void ShowMyFriendDetailInfo(){
		ShowMyFriendInfo();
		cout<<"주소 : "<<addr<<endl;
		cout<<"전화 : "<<phone<<endl;
	}
	~MyFriendDetailInfo(){
		delete []addr;
		delete []phone;
	}
};

int main(void){
	MyFriendDetailInfo mfd1("Kim",20,"KOREA","010-1111-2222");
	MyFriendDetailInfo mfd2("Lee",30,"KOREA","010-3333-4444");
	
	mfd1.ShowMyFriendDetailInfo();
	mfd2.ShowMyFriendDetailInfo();
	
	return 0;
}
*/
