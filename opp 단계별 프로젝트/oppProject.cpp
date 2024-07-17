#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


using namespace std;
const int NAME_LEN = 20;

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

typedef struct {
	int accID;
	int balance;
	char cusName[NAME_LEN];
}Account;

Account accArr[100];
int accNum = 0;

int main(void) {
	int choice;

	while (1) {
		ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}

void ShowMenu() {
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			cout << "중복 된 ID입니다." << endl << endl;
			return;
		}
	}
	cout << "이 름: "; cin >> name;
	cout << endl;

	accArr[accNum].accID = id;
	strcpy(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney() {
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID != id) {
			cout << "유효하지 않은 ID 입니다." << endl << endl;
			return;
		}
	}
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
}

void WithdrawMoney() {
	int money;
	int id;
	cout << "[출 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID != id) {
			cout << "유효하지 않은 ID 입니다." << endl << endl;
			return;
		}
	}
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "잔액부족" << endl << endl;
				return;
			}
		}
	}
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이 름: " << accArr[i].cusName << endl;
		cout << "잔 액: " << accArr[i].balance << endl;
	}
}