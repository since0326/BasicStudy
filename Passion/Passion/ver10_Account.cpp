/*
//ver9_Account.cpp
#include "ver9_BankingCommonDecl.h"
#include "ver9_Account.h"

Account::Account(int ID, int money, String name)	 : accID(ID), balance(money){
//	cusName=new char[strlen(name)+1];
//	strcpy(cusName,name);
	cusName=name;
}
//Account::Account(const Account &ref) : accID(ref.accID), balance(ref.balance){
//	cusName=new char[strlen(ref.cusName)+1];
//	strcpy(cusName,ref.cusName);
//}
//Account& Account::operator=(const Account& ref){
//	accID=ref.accID;
//	balance=ref.balance;
//	
//	delete []cusName;
//	cusName=new char[strlen(ref.cusName)+1];
//	strcpy(cusName, ref.cusName);
//	return *this;
//}

//ĸ��ȭ,����ȭ 
int Account::GetAccID() const{  
	return accID;
}
void Account::Deposit(int money){
	balance+=money;
}

//��ݾ� ��ȯ, ������ 0��ȯ 
int Account::Withdraw(int money){
	if(balance<money){
		return 0;
	}
	balance-=money;
	return money;
}
void Account::ShowAccInfo() const{
	cout<<"����ID : "<<accID<<endl;
	cout<<"�̸� : "<<cusName<<endl;
	cout<<"�ܾ� : "<<balance<<endl;
}
//Account::~Account(){
//	delete []cusName;
//}
*/
