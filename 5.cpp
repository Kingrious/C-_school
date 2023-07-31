#include<iostream>
using namespace std;
int main() {
	cout << "请告诉我您要转换的摄氏度：" << endl;
	double Temperature1;
	cin >> Temperature1;
	double Temperature2;
	Temperature2 = Temperature1 * 1.8 + 32.0;
	cout << Temperature1 << "摄氏度转换为华氏度的结果为：" << Temperature2 << "华氏度" << endl;
	return 0;
}