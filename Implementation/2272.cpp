#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int k = (a * c * (c + 1) / 2 - b);
	cout << (k > 0 ? k : 0) << endl;
	return 0;
}