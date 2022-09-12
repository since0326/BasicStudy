/*
#include <iostream>
#include <set>
using namespace std;

template <typename T>
void print_set(set<T>& s){
	cout<<"[";
	for(typename set<T>::iterator itr=s.begin();itr!=s.end();++itr){
		cout<<*itr<<" ";
	}
	cout<<"]"<<endl;
}

int main(){
	set<int> s;
	
	s.insert(10);
	s.insert(50);
	s.insert(20);
	s.insert(40);
	s.insert(30);
	
	cout<<"������� ���ĵǼ� ���´�."<<endl;
	print_set(s);
	
	cout<<"20�� s�� �����ΰ���? :: ";
	auto itr=s.find(20);
	if(itr!=s.end()){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl; 
	}
	
	cout<<"25�� s�� �����ΰ���? :: ";
	itr=s.find(25);
	if(itr!=s.end()){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl; 
	} 
}
*/
