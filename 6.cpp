#include<iostream>
using namespace std;
int main() {
	cout << "请输入数值（单位：光年）后将转换为天文单元" << endl;
	double lightyears;
	cin >> lightyears;
	double Meter;
	Meter = lightyears * 63240;
	cout << lightyears << "光年转换后为" << Meter << "英里" << endl;
	return 0;
}