/*
#include <iostream>
#include <deque>
using namespace std;

template <typename T>
void print_deque(deque<T>& dq){
	cout<<"[";
	for(const auto& elem : dq){
		cout<<elem<<" ";
	}
	cout<<"]"<<endl;
}

int main(){
	deque<int> dq;
	
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(30);
	dq.push_front(40);
	
	cout<<"�ʱ� dq����"<<endl;
	print_deque(dq);
	
	cout<<"�� ���� ���� ����"<<endl;
	dq.pop_front();
	print_deque(dq);
}
*/
