/*
//ver8_NormalAccount.h
//Ŭ���� �̸�: NormalAccount
//Ŭ���� ����: Entity class
#ifndef __NORAML_ACCOUNT_H__
#define __NORAML_ACCOUNT_H__

#include "ver8_Account.h"

class NormalAccount : public Account{
private:
	int interRate; //������ %���� 
public:
	NormalAccount(int ID,int money, char *name, int rate) : Account(ID, money, name), interRate(rate){
		
	}
	virtual void Deposit(int money){
		Account::Deposit(money);					//�����߰� 
		Account::Deposit(money*(interRate/100.0));	//�����߰� 
	}
};

#endif
*/
