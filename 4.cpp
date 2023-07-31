#include<iostream>
using namespace std;
int main() {
	cout << "请输入您的年龄，我将告诉您的年龄包含多少个月" << endl;
	int age;
	cin >> age;
	int month = age / 12;
	cout << "您的年龄有" << month << "个月" << endl;
	return 0;
}