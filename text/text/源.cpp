#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main(void) {
	int year;
	int mouth;
	bool flag;
	int days;
	cout << "���������" << endl;
	cin >> year;
	cout << "�������·�" << endl;
	cin >> mouth;
	if (year % 400 == 0) {
		flag = true;
	}
	else if (year % 4 == 0 && year % 400 != 0) {
		flag = true;
	}
	else {
		flag = false;
	}
	switch (mouth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = flag ? 29 : 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	defult:
		cout << "��Ч�·�" << endl;
		break;
	}
	cout << year << "��" << mouth << "��һ����" << days << "��" << endl;
	system("ping github.com");
	system("pause");
	return 0;
}