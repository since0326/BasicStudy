/*
//ver9_AccountHandler.h
//Ŭ���� �̸�: AccountHandler
//Ŭ���� ����: Control class
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "ver9_Account.h"
#include "ver9_AccountArray.h"

class AccountHandler{
private:
	BoundCheckAccountPtrArray accArr; 
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
