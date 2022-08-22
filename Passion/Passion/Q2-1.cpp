#include <iostream>

using namespace std;

/*
//문제 1 
int func1(int &num){
	return num+1;
}

int func2(int &num){
	return num*=-1;
}

int main(void){
	int num;
	
	cout << "정수를 입력하세요 : ";
	cin >> num;
	
	cout << "func1 실행결과 : " << func1(num) << endl;
	cout << "func2 실행결과 : " << func2(num) << endl;
	
	return 0;
}
*/

/*
//문제 2
void SwapPointer(int *ptr1,int *ptr2){
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

int main(void){
	int num1=5;
	int *ptr1=&num1;
	int num2=10;
	int *ptr2=&num2;
	
	SwapPointer(ptr1,ptr2);
	cout <<"num1 : " << num1 << endl;
	cout <<"num2 : " << num2 << endl;
} 
*/
