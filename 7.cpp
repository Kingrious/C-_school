#include<iostream>
using namespace std;
int main() {
	cout << "请输入小时数：" << endl;
	int hours;
	cin >> hours;
	cout << "请输入分钟数" << endl;
	double minutes;
	cin >> minutes;
	cout << "此时时间是：" << hours << "时" << minutes << "分" << endl;
	return 0;
}