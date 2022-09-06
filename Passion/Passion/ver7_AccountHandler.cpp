/*
//ver7_AccountHandler.cpp

#include "ver7_BankingCommonDecl.h"
#include "ver7_AccountHandler.h"
#include "ver7_Account.h"
#include "ver7_NormalAccount.h"
#include "ver7_HighCreditAccount.h"

void AccountHandler::ShowMenu() const{
	cout<< "-----Menu-----"<<endl; 
	cout<< "1. ���°���"<<endl;
	cout<< "2. �� ��"<<endl;
	cout<< "3. �� ��"<<endl;
	cout<< "4. �������� ��ü ���"<<endl;
	cout<< "5. ���α׷� ����"<<endl;
}
void AccountHandler::MakeAccount(){
	int sel;
	cout<<"[������������]"<<endl;
	cout<<"1.���뿹�ݰ��� ";
	cout<<"2.�ſ�ŷڰ��� "<<endl;
	cout<<"���� : ";
	cin>>sel;
	
	if(sel==NORMAL){
		MakeNormalAccount();
	} else {
		MakeCreditAccount();
	}
}

void AccountHandler::MakeNormalAccount(){
	int id;
	char name[NAME_LEN];
	int balance;
	int interRate;
	
	cout<<"[���뿹�ݰ��� ����]"<<endl;
	cout<<"����ID :";
	cin>>id; 
	cout<<"�̸� :" ;
	cin>>name;
	cout<<"�Աݾ� :" ;
	cin>>balance;
	cout<<"������ : ";
	cin>>interRate;
	cout<<endl;
	
	accArr[accNum++]=new NormalAccount(id, balance, name, interRate);
}

void AccountHandler::MakeCreditAccount(){
	int id;
	char name[NAME_LEN];
	int balance;
	int interRate;
	int creditLevel;
	
	cout<<"[�ſ�ŷڰ��� ����]"<<endl;
	cout<<"����ID :";
	cin>>id; 
	cout<<"�̸� :" ;
	cin>>name;
	cout<<"�Աݾ� :" ;
	cin>>balance;
	cout<<"������ : ";
	cin>>interRate;
	cout<<"�ſ���(1toA, 2toB, 3toC) : ";
	cin>>creditLevel;
	cout<<endl;
	
	switch(creditLevel){
	case 1:
		accArr[accNum++]=new HighCreditAccount(id, balance, name, interRate, LEVEL_A);
		break;
	case 2:
		accArr[accNum++]=new HighCreditAccount(id, balance, name, interRate, LEVEL_B);
		break;
	case 3:
		accArr[accNum++]=new HighCreditAccount(id, balance, name, interRate, LEVEL_C);
		break;
	}
	
}

void AccountHandler::DepositMoney(){
	int money;
	int id;
	
	cout << "[�� ��]" << endl ;
	cout << "����ID :" ;
	cin >> id;
	cout << "�Աݾ� :" ;
	cin >> money;
	
	for(int i=0; i<accNum; i++){
		if(accArr[i]->GetAccID()==id){
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void AccountHandler::WithdrawMoney(){
	int money;
	int id;
	
	cout << "[�� ��]" << endl ;
	cout << "����ID :" ;
	cin >> id;
	cout << "��ݾ� :" ;
	cin >> money;
	
	for(int i=0; i<accNum;i++){
		if(accArr[i]->GetAccID()==id){
			if(accArr[i]->Withdraw(money)==0){
				cout << "�ܾ׺���" << endl << endl;
				return;
			}			

			cout << "��ݿϷ�" << endl << endl;
			return; 
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

AccountHandler::AccountHandler() : accNum(0){
		
}

void AccountHandler::ShowAllAccInfo() const{
	for(int i=0; i<accNum; i++){
		accArr[i]->ShowAccInfo();
		cout<<endl;
	}	
}

AccountHandler::~AccountHandler(){
	for(int i=0;i<accNum;i++){
		delete accArr[i];
	}
}
*/