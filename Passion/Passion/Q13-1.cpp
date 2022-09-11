#include <iostream>
using namespace std;

/*
//문제 1번 
class Point{
private:
	int xpos;
	int ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y){
		
	}
	void ShowPosition() const{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
	}
};

template <typename T>
T SwapData(T &data1, T &data2){
	T temp=data1;
	data1=data2;
	data2=temp;
}

int main(void){
	Point pos1(10,20);
	Point pos2(1,2);
	SwapData(pos1,pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();
	
	return 0;
}
*/

/*
//문제 2번
template <typename T>
T SumArray(T arr[], int len){
	T sum=(T)0;
	for(int i=0;i<len;i++){
		sum+=arr[i];
	}
	
	return sum;
}

int main(void){
	int arr[]={10,20,30};
	cout<<SumArray(arr,sizeof(arr)/sizeof(int))<<endl;
	
	return 0;
}
*/
