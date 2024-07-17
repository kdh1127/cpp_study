//#include <iostream>;
//using namespace std;

// 예제 문제 1-1-1번
/*
int main(void) 
{
	int num1, num2, num3, num4, num5;
	int result;

	cout<<"1번째 정수 입력: ";
	cin>>num1;
	cout<<"2번째 정수 입력: ";
	cin>>num2;
	cout<<"3번째 정수 입력: ";
	cin>>num3;
	cout<<"4번째 정수 입력: ";
	cin>>num4; 
	cout<<"5번째 정수 입력: ";
	cin>>num5;

	result = num1+num2+num3+num4+num5;
	cout<<"합계: "<<result<<endl;
}
*/

// 예제 문제 1-1-2번
/*
int main(void) {
	char name[100];
	char pnum[100];

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "전화번호를 입력하세요: ";
	cin >> pnum;
	
	cout << "이름: " << name << endl<<"전화번호: " << pnum;
}
*/

// 예제 문제 1-1-3번
/*
int main() {
	int num;
	int result=0;
	cout << "구구단을 출력 할 번호를 입력하세요: ";
	cin >> num;

	for (int i = 1; i < 10; i++) 
	{
		result = num * i;
		cout << num << "x" << i << ": " << result<<endl;
	}
}
*/

// 예제 문제 1-1-4번
/*
int main() {
	int num =0;
	int result = 0;

	while (1)
	{		
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> num;

		if (num == -1)
			break;

		result = 50 + num * 0.12;
		cout << "이번 달 급여: " << result << "만원" << endl;		
	}

	cout << "프로그램을 종료합니다.";
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////
// 예제 문제 1-2번
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
// 예제 문제 1-3번
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