#include <iostream>
#include <cstring>
using namespace std;

/*
//문제1
class Point{
private:
	int xpos, ypos;

public:
	Point(int x, int y) : xpos(x), ypos(y){
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
	Circle(int x, int y, int r) :center(x,y), rad(r){		
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
	Ring(int inx,int iny, int inr, int outx, int outy, int outr) : InnerCircle(inx, iny, inr), OutterCircle(outx, outy, outr){
	}
	void ShowRingInfo() const{
		cout<<"Inner Circle Info..."<<endl;
		InnerCircle.ShowCircleInfo();
		cout<<"Outter Circle Info..."<<endl;
		OutterCircle.ShowCircleInfo();
	}
	
};

int main(void){
	Ring ring(1,1,4,2,2,9);
	ring.ShowRingInfo();
	
	return 0;
}
*/

/*
//문제 2 
namespace COMP_POS{
	enum{CLERK, SENIOR, ASSIST, MANAGER};
	
	void ShowGradeInfo(int g){
		switch(g){
			case CLERK:
				cout<<"사원"<<endl;
				break;
			case SENIOR:
				cout<<"주임"<<endl;
				break;
			case ASSIST:
				cout<<"대리"<<endl;
				break;
			case MANAGER:
				cout<<"과장"<<endl;
				break;
		}
	}
}

class NameCard{
private:
	char *name;
	char *company;
	char *pNum;
	int grade;
public:
	NameCard(char *n,char *c,char *p,int g):grade(g){
		name=new char[strlen(n)+1];
		company=new char[strlen(c)+1];
		pNum=new char[strlen(p)+1];
		strcpy(name,n);
		strcpy(company,c);
		strcpy(pNum,p);
	}
	void ShowNameCardInfo(){
		cout<<"이름 : " <<name<<endl;
		cout<<"회사 : " <<company<<endl;
		cout<<"전화번호 : " <<pNum<<endl;
		cout<<"직급 : " ;
		COMP_POS::ShowGradeInfo(grade);
		cout<<endl;
	}
	~NameCard(){
		delete []name;
		delete []company;
		delete []pNum;
	}
}; 



int main(void){
	NameCard manClerk("Lee","ABCEng","010-1111-2222",COMP_POS::CLERK);
	NameCard manSENIOR("Hong","OrangeEng","010-3333-4444",COMP_POS::SENIOR);
	NameCard manASSIST("Kim","SoGoodComp","010-5555-6666",COMP_POS::ASSIST);
	
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manASSIST.ShowNameCardInfo();
	
	return 0;
} 
*/
