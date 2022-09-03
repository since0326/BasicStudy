/*
#include <iostream>
using namespace std;

class Point{
private:
	int xpos;
	int ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y){
		
	}
	void ShowPosition() const{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
	}
	Point& operator++(){	//전위증가 
		xpos+=1;
		ypos+=1;
		return *this;
	}
	const Point operator++(int){		//(int)는 전,후위연산 구별을 위해 사용됨 (int 사용시 후위연산) 
		const Point retobj(xpos, ypos);	//const Point retobj(*this)
		xpos+=1;
		ypos+=1;
		return retobj;
	}
	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref){	//전위감소 
	ref.xpos-=1;
	ref.ypos-=1;
	return ref;
}

const Point operator--(Point &ref, int){	//후위감소 
	const Point retobj(ref);	//const 객체 
	ref.xpos-=1;
	ref.ypos-=1;
	return retobj;
}

int main(void){
	Point pos(3,5);
	Point cpy;
	cpy=pos--;
	cpy.ShowPosition();
	pos.ShowPosition();
	
	cpy=pos++;
	cpy.ShowPosition();
	pos.ShowPosition();
	
	
	return 0;
}
*/
