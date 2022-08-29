#include <iostream>
#include <cstring>
using namespace std;

/*
//문제 1번 
class Rectangle{
private:
	int width;
	int height;
public:
	Rectangle(int w,int h) : width(w),height(h){
		
	}
	void ShowAreaInfo(){
		cout<<"면적 : "<<width*height<<endl;
	}
};

class Square : public Rectangle{
public:
	Square(int s) : Rectangle(s,s){
		
	}
};

int main(void){
	Rectangle rec(4,3);
	rec.ShowAreaInfo();
	
	Square sqr(7);
	sqr.ShowAreaInfo();
	
	return 0;
}
*/

/*
//문제 2번
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
	void ShowEBookInfo(){
		ShowBookInfo();
		cout<<"인증키 : "<<DRMKey<<endl;
	}
	~EBook(){
		delete []DRMKey;
	}
}; 

int main(void){
	Book book("좋은 C++","555-12345-890-0",20000);
	book.ShowBookInfo();
	cout<<endl;
	EBook ebook("좋은 C++ ebook","555-12345-890-1",10000,"fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	
	return 0;
}
*/
