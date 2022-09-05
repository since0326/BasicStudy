/*
//ver7_AccountHandler.h
//클래스 이름: AccountHandler
//클래스 유형: Control class
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "ver7_Account.h"

class AccountHandler{
private:
	Account *accArr[100];	//Account 저장을 위한 배열 
	int accNum;			//저장된 Account 수 
public:
	AccountHandler();
	void ShowMenu() const;			//메뉴출력 
	void MakeAccount();				//계좌개설을 위한 함수 
	void DepositMoney();			//입	금 
	void WithdrawMoney();			//출	금 
	void ShowAllAccInfo() const;	//잔액조회
	~AccountHandler();
protected:
	void MakeNormalAccount();
	void MakeCreditAccount();
}; 

#endif
*/
