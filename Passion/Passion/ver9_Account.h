/*
//ver9_Account.h
//Ŭ���� �̸�: Account
//Ŭ���� ����: Entity class 
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "ver9_String.h"

class Account{
private:
	int accID;		//���¹�ȣ 
	int balance;	//��	�� 
	String cusName; //char *cusName ���̸� 
public:
	Account(int ID, int money, String name);
//	Account(int ID, int money, char *name);
//	Account(const Account &ref);
//	Account& operator=(const Account& ref);
	
	int GetAccID() const;
	//�����Լ� ���� 
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	//~Account();
};

#endif
*/
