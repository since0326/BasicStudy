/*
#include <iostream>
#include <map>
#include <string>
using namespace std;

template <typename K, typename V>
void print_map(map<K, V>& m){
	for(auto itr=m.begin(); itr!=m.end();++itr){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
}

int main(){
	map<string, double>pitcher_list;
	
	pitcher_list.insert(pair<string, double>("�ڼ���",2.23));
	pitcher_list.insert(pair<string, double>("��Ŀ",2.93));
	pitcher_list.insert(pair<string, double>("�Ǿ���",2.95));
	
	pitcher_list.insert(make_pair("������",3.04)); 
	pitcher_list.insert(make_pair("�����",3.05));
	pitcher_list.insert(make_pair("����",3.09));
	
	pitcher_list["����Ʈ"]=3.56;
	pitcher_list["������"]=3.76;
	pitcher_list["�̸�"]=3.90;
	
	print_map(pitcher_list);
	
	cout<<"�ڼ��� �������? :: "<<pitcher_list["�ڼ���"]<<endl; 
}
*/
