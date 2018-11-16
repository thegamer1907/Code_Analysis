#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int a = input.find("1111111"), b = input.find("0000000");
	if (a >= 0 || b >=0)
		cout << "YES";
	else
		cout << "NO";
}