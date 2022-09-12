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
	
	pitcher_list.insert(pair<string, double>("¹Ú¼¼¿õ",2.23));
	pitcher_list.insert(pair<string, double>("ÇØÄ¿",2.93));
	pitcher_list.insert(pair<string, double>("ÇÇ¾î¹êµå",2.95));
	
	pitcher_list.insert(make_pair("Â÷¿ìÂù",3.04)); 
	pitcher_list.insert(make_pair("Àå¿øÁØ",3.05));
	pitcher_list.insert(make_pair("ÇíÅÍ",3.09));
	
	pitcher_list["´ÏÆÛÆ®"]=3.56;
	pitcher_list["¹ÚÁ¾ÈÆ"]=3.76;
	pitcher_list["ÄÌ¸®"]=3.90;
	
	print_map(pitcher_list);
	
	cout<<"¹Ú¼¼¿õ ¹æ¾îÀ²Àº? :: "<<pitcher_list["¹Ú¼¼¿õ"]<<endl; 
}
*/
