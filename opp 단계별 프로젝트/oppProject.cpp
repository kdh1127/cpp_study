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
		cout << "����: ";
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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];

	cout << "[���°���]" << endl;
	cout << "����ID: "; cin >> id;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			cout << "�ߺ� �� ID�Դϴ�." << endl << endl;
			return;
		}
	}
	cout << "�� ��: "; cin >> name;
	cout << endl;

	accArr[accNum].accID = id;
	strcpy(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney() {
	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "����ID: "; cin >> id;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID != id) {
			cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
			return;
		}
	}
	cout << "�Աݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
}

void WithdrawMoney() {
	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "����ID: "; cin >> id;
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID != id) {
			cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
			return;
		}
	}
	cout << "��ݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
		}
	}
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "����ID: " << accArr[i].accID << endl;
		cout << "�� ��: " << accArr[i].cusName << endl;
		cout << "�� ��: " << accArr[i].balance << endl;
	}
}