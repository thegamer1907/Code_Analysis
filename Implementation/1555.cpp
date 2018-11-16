#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int temp = 1;
	bool isDang = false;

	for(int i = 0; i < str.length()-1; i++) {
		if(str[i] == str[i+1]) temp++;
		else temp = 1;

		if(temp >= 7) {
			isDang = true;
			break;
		}
	}
	
	cout << (isDang ? "YES" : "NO");

}
