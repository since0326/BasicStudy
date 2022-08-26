/*
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS{
	enum{CLERK, SENIOR, ASSIST, MANAGER};
	
	void ShowGradeInfo(int g){
		switch(g){
			case CLERK:
				cout<<"���"<<endl;
				break;
			case SENIOR:
				cout<<"����"<<endl;
				break;
			case ASSIST:
				cout<<"�븮"<<endl;
				break;
			case MANAGER:
				cout<<"����"<<endl;
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
		this->name=new char[strlen(n)+1];
		this->company=new char[strlen(c)+1];
		this->pNum=new char[strlen(p)+1];
		strcpy(this->name,n);
		strcpy(this->company,c);
		strcpy(this->pNum,p);
	}
	NameCard(const NameCard &copy) : grade(copy.grade){
		name=new char[strlen(copy.name)+1];
		company=new char[strlen(copy.company)+1];
		pNum=new char[strlen(copy.pNum)+1];
		strcpy(name,copy.name);
		strcpy(company,copy.company);
		strcpy(pNum,copy.pNum);
	}
	void ShowNameCardInfo(){
		cout<<"�̸� : " <<name<<endl;
		cout<<"ȸ�� : " <<company<<endl;
		cout<<"��ȭ��ȣ : " <<pNum<<endl;
		cout<<"���� : " ;
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
	NameCard copy1=manClerk;
	NameCard manSENIOR("Hong","OrangeEng","010-3333-4444",COMP_POS::SENIOR);
	NameCard copy2=manSENIOR;
	
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	
	return 0;
} 
*/
