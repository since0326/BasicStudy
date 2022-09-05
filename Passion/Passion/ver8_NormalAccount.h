/*
//ver8_NormalAccount.h
//클래스 이름: NormalAccount
//클래스 유형: Entity class
#ifndef __NORAML_ACCOUNT_H__
#define __NORAML_ACCOUNT_H__

#include "ver8_Account.h"

class NormalAccount : public Account{
private:
	int interRate; //이자율 %단위 
public:
	NormalAccount(int ID,int money, char *name, int rate) : Account(ID, money, name), interRate(rate){
		
	}
	virtual void Deposit(int money){
		Account::Deposit(money);					//원금추가 
		Account::Deposit(money*(interRate/100.0));	//이자추가 
	}
};

#endif
*/
