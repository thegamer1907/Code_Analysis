#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

bool y(int x) {
	string s = to_string(x);
	int c = 0;
	for (auto v : s) {
		c += (v - '0');
	}
	return c == 10;
}
int main() {
	int n;
	cin >> n;

	int x = 18;
	while (n){
		x++;
		if (y(x)) n--; 
	}
	cout << x << endl;
}