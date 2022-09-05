/*
//ver8_Account.h
//Ŭ���� �̸�: Account
//Ŭ���� ����: Entity class 
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account{
private:
	int accID;		//���¹�ȣ 
	int balance;	//��	�� 
	char *cusName;	//���̸� 
public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);
	Account& operator=(const Account& ref);
	
	int GetAccID() const;
	//�����Լ� ���� 
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

#endif
*/
