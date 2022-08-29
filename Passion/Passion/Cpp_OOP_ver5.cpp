/*
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

//Ŭ���� �̸�: Account
//Ŭ���� ����: Entity class 
class Account{
private:
	int accID;		//���¹�ȣ 
	int balance;	//��	�� 
	char *cusName;	//���̸� 
public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);
	
	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

Account::Account(int ID, int money, char *name)	 : accID(ID), balance(money){
	cusName=new char[strlen(name)+1];
	strcpy(cusName,name);
}
Account::Account(const Account &ref) : accID(ref.accID), balance(ref.balance){
	cusName=new char[strlen(ref.cusName)+1];
	strcpy(cusName,ref.cusName);
}
	
//ĸ��ȭ,����ȭ 
int Account::GetAccID() const{  
	return accID;
}
void Account::Deposit(int money){
	balance+=money;
}

//��ݾ� ��ȯ, ������ 0��ȯ 
int Account::Withdraw(int money){
	if(balance<money){
		return 0;
	}
	balance-=money;
	return money;
}
void Account::ShowAccInfo() const{
	cout<<"����ID : "<<accID<<endl;
	cout<<"�̸� : "<<cusName<<endl;
	cout<<"�ܾ� : "<<balance<<endl;
}
Account::~Account(){
	delete []cusName;
}

//Ŭ���� �̸�: AccountHandler
//Ŭ���� ����: Control class

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
}; 

void AccountHandler::ShowMenu() const{
	cout << "-----Menu-----" << endl; 
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void AccountHandler::MakeAccount(){
	int id;
	char name[NAME_LEN];
	int balance;
	
	cout << "[���°���]" << endl;
	cout << "����ID :";
	cin >> id; 
	cout << "�̸� :" ;
	cin >> name;
	cout << "�Աݾ� :" ;
	cin >> balance;
	cout << endl;
	
	accArr[accNum++]=new Account(id, balance, name);
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

int main(void){
	AccountHandler manager;
	int choice;
	
	while(1){
		manager.ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout << endl;
		
		switch(choice){
			case MAKE:
				manager.MakeAccount();
				break;
			case DEPOSIT:
				manager.DepositMoney();
				break;
			case WITHDRAW:
				manager.WithdrawMoney();
				break;
			case INQUIRE:
				manager.ShowAllAccInfo();
				break;
			case EXIT:
				return 0;
			default:
				cout << "Illegal slection.. " << endl;
		}
	}
	
	return 0;
}
*/
