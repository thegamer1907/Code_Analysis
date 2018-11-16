#include <iostream>
#include <string>
#include <sstream>

using namespace std;


bool check(string input, string a, string b) {
	int index = input.find(a, 0);
	if (index >= 0) {
		int newIndex = input.find(b, index+2);
		if (newIndex > 0) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int main()
{
	string input = "";
	getline(cin, input);

	if (check(input, "AB", "BA") || check(input, "BA", "AB")) {
		cout << "YES"<<endl;
	}
	else {
		cout << "NO" << endl;
	}
}