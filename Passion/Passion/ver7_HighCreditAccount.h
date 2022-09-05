/*
//ver7_HighCreditAccount.h
//Ŭ���� �̸�: HighCreditAccount
//Ŭ���� ����: Entity class
#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "ver7_NormalAccount.h"

class HighCreditAccount : public NormalAccount{
private:
	int specialRate;
public:
	HighCreditAccount(int ID, int money, char *name, int rate, int special) : NormalAccount(ID, money, name,rate), specialRate(special){
		
	}
	virtual void Deposit(int money){
		NormalAccount::Deposit(money);					//���ݰ� �����߰� 
		Account::Deposit(money*(specialRate/100.0));	//Ư�������߰� 
	}
}; 

#endif
*/
