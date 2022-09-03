#include <iostream>
#include <cstring>
using namespace std;

/*
//문제 1 
class Gun{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum){
		
	}
	void Shot(){
		cout<<"BBANG!"<<endl;
		bullet--;
	}
};

class Police{
private:
	int handcuffs;
	Gun *pistol;
public:
	Police(int bnum, int bcuff) : handcuffs(bcuff){
		if(bnum>0){
			pistol=new Gun(bnum);
		} else {
			pistol=NULL;
		}
	}
	
	Police(const Police& ref) : handcuffs(ref.handcuffs){
		if(ref.pistol!=NULL){
			pistol=new Gun(*(ref.pistol));
		} else {
			pistol=NULL;
		}
	}
	
	Police& operator=(const Police& ref){
		if(pistol!=NULL){
			delete pistol;
		}
		if(ref.pistol!=NULL){
			pistol=new Gun(*(ref.pistol));
		} else {
			pistol=NULL;
		}
		
		handcuffs=ref.handcuffs;
		return *this;
	}
	
	void PutHandcuff(){
		cout<<"SNAP!"<<endl;
		handcuffs--;
	}
	
	void Shot(){
		if(pistol==NULL){
			cout<<"Hut BBANG!"<<endl;
		} else {
			pistol->Shot();
		}
	}
	
	~Police(){
		if(pistol!=NULL){
			delete pistol;
		}
	}
};

int main(void){
	Police pman1(5,3);
	Police pman2=pman1; // 복사생성자 호출 
	pman2.Shot();
	pman2.PutHandcuff();
	
	Police pman3(2,3);
	pman3=pman2;	//대입연산자 호출 
	pman3.Shot();
	pman3.PutHandcuff();
	
	return 0;
}
*/

/*
//문제 2
class Book{
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(char *t,char *i, int p) : price(p){
		title=new char[strlen(t)+1];
		isbn=new char[strlen(i)+1];
		strcpy(title,t);
		strcpy(isbn,i);
	}
	Book(const Book& ref) : price(ref.price){
		title=new char[strlen(ref.title)+1];
		isbn=new char[strlen(ref.isbn)+1];
		strcpy(title,ref.title);
		strcpy(isbn,ref.isbn);
	} 
	Book& operator=(const Book& ref){
		delete []title;
		delete []isbn;
		
		title=new char[strlen(ref.title)+1];
		isbn=new char[strlen(ref.isbn)+1];
		strcpy(title,ref.title);
		strcpy(isbn,ref.isbn);
		price=ref.price;
		
		return *this;
	}
	void ShowBookInfo(){
		cout<<"제목 : "<<title<<endl;
		cout<<"ISBN : "<<isbn<<endl;
		cout<<"가격 : "<<price<<endl; 
	}
	~Book(){
		delete []title;
		delete []isbn;
	}
};

class EBook : public Book{
private:
	char *DRMKey;
public:
	EBook(char *t,char *i, int p ,char *key) : Book(t,i,p){
		DRMKey=new char[strlen(key)+1];
		strcpy(DRMKey,key);
	}
	EBook(const EBook& ref) : Book(ref){
		DRMKey=new char[strlen(ref.DRMKey)+1];
		strcpy(DRMKey,ref.DRMKey);
	}
	EBook& operator=(const EBook &ref){
		Book::operator=(ref);
		delete []DRMKey;
		DRMKey=new char[strlen(ref.DRMKey)+1];
		strcpy(DRMKey,ref.DRMKey);
		
		return *this;
	}
	void ShowEBookInfo(){
		ShowBookInfo();
		cout<<"인증키 : "<<DRMKey<<endl;
	}
	~EBook(){
		delete []DRMKey;
	}
}; 

int main(void){
	EBook ebook1("좋은 C++ ebook","555-12345-890-1",10000,"fdx9w0i8kiw");
	EBook ebook2=ebook1;
	ebook2.ShowEBookInfo();
	cout<<endl;
	EBook ebook3("dumy","dumy",0,"dumy");
	ebook3=ebook2;
	ebook3.ShowEBookInfo();
	
	return 0;
}
*/
