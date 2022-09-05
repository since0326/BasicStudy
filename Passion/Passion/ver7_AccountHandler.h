/*
//ver7_AccountHandler.h
//Ŭ���� �̸�: AccountHandler
//Ŭ���� ����: Control class
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "ver7_Account.h"

class AccountHandler{
private:
	Account *accArr[100];	//Account ������ ���� �迭 
	int accNum;			//����� Account �� 
public:
	AccountHandler();
	void ShowMenu() const;			//�޴���� 
	void MakeAccount();				//���°����� ���� �Լ� 
	void DepositMoney();			//��	�� 
	void WithdrawMoney();			//��	�� 
	void ShowAllAccInfo() const;	//�ܾ���ȸ
	~AccountHandler();
protected:
	void MakeNormalAccount();
	void MakeCreditAccount();
}; 

#endif
*/
