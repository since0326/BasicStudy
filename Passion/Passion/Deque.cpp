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
	
	cout<<"초기 dq상태"<<endl;
	print_deque(dq);
	
	cout<<"맨 앞의 원소 제거"<<endl;
	dq.pop_front();
	print_deque(dq);
}
*/
