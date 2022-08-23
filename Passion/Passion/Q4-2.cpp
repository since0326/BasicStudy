/*
#include <iostream>
using namespace std;

class Point{
private:
	int xpos, ypos;

public:
	void PosInit(int x, int y){
		xpos=x;
		ypos=y;
	}
	
	void ShowPointInfo() const{
		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
	}
};

class Circle{
private:
	int rad;
	Point center;
public:
	void CircleInit(int x,int y, int r){
		rad=r;
		center.PosInit(x,y);
	}
	void ShowCircleInfo() const{
		cout<<"radius : "<<rad<<endl;
		center.ShowPointInfo();
	}
};

class Ring{
private:
	Circle InnerCircle;
	Circle OutterCircle;
public:
	void RingInit(int inx,int iny, int inr, int outx, int outy, int outr){
		InnerCircle.CircleInit(inx, iny, inr);
		OutterCircle.CircleInit(outx, outy, outr);
	}
	void ShowRingInfo() const{
		cout<<"Inner Circle Info..."<<endl;
		InnerCircle.ShowCircleInfo();
		cout<<"Outter Circle Info..."<<endl;
		OutterCircle.ShowCircleInfo();
	}
	
};

int main(void){
	Ring ring;
	ring.RingInit(1,1,4,2,2,9);
	ring.ShowRingInfo();
	
	return 0;
}
*/
