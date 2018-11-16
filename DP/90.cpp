#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int boy[101] = {}, girl[101] = {};
	int num1, num2, sub, count = 0;
	cin >> num1;
	for (int i = 0; i < num1; ++i) {
		cin >> boy[i];
	}
	cin >> num2;
	for (int i = 0; i < num2; ++i) {
		cin >> girl[i];
	}
	sort(boy, boy + num1);
	sort(girl, girl + num2);
	for (int k = 0; k < num1; ++k) {
		for (int j = 0; j < num2; ++j) {
			sub = abs(boy[k] - girl[j]);
			if (sub <= 1) {
				girl[j] = 999;
				++count;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}