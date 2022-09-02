/*
#include <iostream>
using namespace std;

class Point{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y){
		
	}
	void ShowPosition() const{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
	}
	Point& operator+=(const Point &ref){
		xpos+=ref.xpos;
		ypos+=ref.ypos;
		return *this;
	}
	Point& operator-=(const Point &ref){
		xpos-=ref.xpos;
		ypos-=ref.ypos;
		return *this;
	}
	friend Point operator-(const Point &,const Point &);
	friend bool operator==(const Point &,const Point &);
	friend bool operator!=(const Point &,const Point &);
};

Point operator-(const Point &pos1, const Point &pos2){
		Point pos(pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos);
		return pos;
}

bool operator==(const Point &pos1, const Point &pos2){
	if(pos1.xpos==pos2.xpos && pos1.ypos==pos2.ypos){
		return true;
	} else {
		return false;
	}
}

bool operator!=(const Point &pos1, const Point &pos2){
	return  !(pos1==pos2);
}

int main(void){
	Point pos1(10,20);
	Point pos2(10,20);
	Point pos3(10,20);
	
	(pos1-pos2).ShowPosition();
	(pos2+=pos3).ShowPosition();
	
	if(pos2==pos3){
		cout<<"True"<<endl;
	} else {
		cout<<"False"<<endl;
	}
	
	(pos2-=pos3).ShowPosition();
	
	if(pos2!=pos3){
		cout<<"False"<<endl;
	} else {
		cout<<"True"<<endl;
	}
	
	return 0;
}
*/
