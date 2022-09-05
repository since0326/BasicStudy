/*
//ver8_Account.h
//클래스 이름: Account
//클래스 유형: Entity class 
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account{
private:
	int accID;		//계좌번호 
	int balance;	//잔	액 
	char *cusName;	//고객이름 
public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);
	Account& operator=(const Account& ref);
	
	int GetAccID() const;
	//가상함수 선언 
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

#endif
*/
