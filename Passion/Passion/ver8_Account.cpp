/*
//ver8_Account.cpp
#include "ver8_BankingCommonDecl.h"
#include "ver8_Account.h"

Account::Account(int ID, int money, char *name)	 : accID(ID), balance(money){
	cusName=new char[strlen(name)+1];
	strcpy(cusName,name);
}
Account::Account(const Account &ref) : accID(ref.accID), balance(ref.balance){
	cusName=new char[strlen(ref.cusName)+1];
	strcpy(cusName,ref.cusName);
}
Account& Account::operator=(const Account& ref){
	accID=ref.accID;
	balance=ref.balance;
	
	delete []cusName;
	cusName=new char[strlen(ref.cusName)+1];
	strcpy(cusName, ref.cusName);
	return *this;
}

//캡슐화,은닉화 
int Account::GetAccID() const{  
	return accID;
}
void Account::Deposit(int money){
	balance+=money;
}

//출금액 반환, 부족시 0반환 
int Account::Withdraw(int money){
	if(balance<money){
		return 0;
	}
	balance-=money;
	return money;
}
void Account::ShowAccInfo() const{
	cout<<"계좌ID : "<<accID<<endl;
	cout<<"이름 : "<<cusName<<endl;
	cout<<"잔액 : "<<balance<<endl;
}
Account::~Account(){
	delete []cusName;
}
*/
