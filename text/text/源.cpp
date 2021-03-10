#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main(void) {
	int year;
	int mouth;
	bool flag;
	int days;
	cout << "请输入年份" << endl;
	cin >> year;
	cout << "请输入月份" << endl;
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
		cout << "无效月份" << endl;
		break;
	}
	cout << year << "年" << mouth << "月一共有" << days << "天" << endl;
	system("ping github.com");
	system("pause");
	return 0;
}