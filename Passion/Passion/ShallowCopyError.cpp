/*
#include <iostream>
#include <cstring>
using namespace std;

class Person{
private:
	char *name;
	int age;
public:
	Person(const char* myname, int myage) : age(myage){
		int len=strlen(myname)+1;
		name=new char[len];
		strcpy(name, myname);
	}
	//깊은 복사를 위한 복사생성자의 정의, 복사된 객체까지 소멸자가 동작 
	Person(const Person &copy) : age(copy.age){
		name=new char[strlen(copy.name)+1];
		strcpy(name,copy.name);
	}

	void ShowPersonInfo() const{
		cout<<"이름 : "<<name<<endl;
		cout<<"나이 : "<<age<<endl;
	}
	~Person(){
		delete []name;
		cout<<"called destructor!"<<endl;
	}
};

int main(void){
	Person man1("Lee dogn woo",29);
	Person man2=man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	
	return 0;
}
*/
