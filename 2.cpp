#include<iostream>
using namespace std;
int main() {
	cout << "请输入一个以long为单位的距离：" << endl;
	double Length;
	cin >> Length;
	cout << Length << "单位距离等于:" << 220 * Length << "码" << endl;
	return 0;
}