/*
#include <iostream>
#include <list>
using namespace std;

template <typename T>
void print_list(list<T>& lst){
	cout<<"[";
	for(const auto& elem:lst){
		cout<<elem<<" ";
	}
	cout<<"]"<<endl;
}

int main(){
	list<int> lst;
	
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	
	cout<<"ó�� ����Ʈ�� ����"<<endl;
	print_list(lst);
	
	for(list<int>::iterator itr=lst.begin(); itr!=lst.end(); ++itr){
		if(*itr==20){
			lst.insert(itr,50);
		}
	}
	
	cout<<"���� 20�� ���� �տ� 50�� �߰�"<<endl;
	print_list(lst);
	
	for(list<int>::iterator itr=lst.begin(); itr!=lst.end(); ++itr){
		if(*itr==30){
			lst.erase(itr);
			break;
		}
	}
	
	cout<<"���� 30�� ���Ҹ� �����Ѵ�"<<endl;
	print_list(lst);
}
*/
