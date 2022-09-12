/*
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print_vector(vector<T>& vec){
	cout<<"[";
	for(typename vector<T>::iterator itr=vec.begin();itr!=vec.end();++itr){
		cout<<*itr<<" ";
	}
	cout<<"]";
}

int main(){
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(20);
		
	cout<<"처음 백터 상태"<<endl;
	print_vector(vec);
	cout<<endl;
	
	vector<int>::iterator itr=vec.begin();
	//vector<int>::iterator end_itr=vec.end();
	
	for(;itr!=vec.end();++itr){
		if(*itr==20){
			vec.erase(itr);
			itr=vec.begin();
		}
	}
	
	cout<<"값이 20인 원소를 지운다."<<endl;
	print_vector(vec);
}
*/
