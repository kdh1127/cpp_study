//#include <iostream>;
//using namespace std;

// ���� ���� 1-1-1��
/*
int main(void) 
{
	int num1, num2, num3, num4, num5;
	int result;

	cout<<"1��° ���� �Է�: ";
	cin>>num1;
	cout<<"2��° ���� �Է�: ";
	cin>>num2;
	cout<<"3��° ���� �Է�: ";
	cin>>num3;
	cout<<"4��° ���� �Է�: ";
	cin>>num4; 
	cout<<"5��° ���� �Է�: ";
	cin>>num5;

	result = num1+num2+num3+num4+num5;
	cout<<"�հ�: "<<result<<endl;
}
*/

// ���� ���� 1-1-2��
/*
int main(void) {
	char name[100];
	char pnum[100];

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	cin >> pnum;
	
	cout << "�̸�: " << name << endl<<"��ȭ��ȣ: " << pnum;
}
*/

// ���� ���� 1-1-3��
/*
int main() {
	int num;
	int result=0;
	cout << "�������� ��� �� ��ȣ�� �Է��ϼ���: ";
	cin >> num;

	for (int i = 1; i < 10; i++) 
	{
		result = num * i;
		cout << num << "x" << i << ": " << result<<endl;
	}
}
*/

// ���� ���� 1-1-4��
/*
int main() {
	int num =0;
	int result = 0;

	while (1)
	{		
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> num;

		if (num == -1)
			break;

		result = 50 + num * 0.12;
		cout << "�̹� �� �޿�: " << result << "����" << endl;		
	}

	cout << "���α׷��� �����մϴ�.";
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////
// ���� ���� 1-2��
/*
int main() {
	int num1 = 20, num2 = 30;
	Swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	Swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	Swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;
	return 0;
}

void Swap(int* num1, int* num2) {
	int swap = *num1;
	*num1 = *num2;
	*num2 = swap;
}

void Swap(char* ch1, char* ch2) {
	char swap = *ch1;
	*ch1 = *ch2;
	*ch2 = swap;
}

void Swap(double* dbl1, double* dbl2) {
	double swap = *dbl1;
	*dbl1 = *dbl2;
	*dbl2 = swap;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////
// ���� ���� 1-3��
/*
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main() {
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
//  cout << "[D, D, D] : " << BoxVolume() << endl;
	return 0;
}

int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

int BoxVolume(int length, int width) {
	return length * width;
}

int BoxVolume(int length) {
	return length;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////