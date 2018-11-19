#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n;
	cin >> s >> n;
	
	bool first = false; //second letter of word is first letter of password
	bool last = false; //first letter of word is last letter of password
	bool full = false; 

	for(int i=0; i<n; i++){
		string x;
		cin >> x;
		if (x[0] == s[1]) {
			last = true;
		}
		if (x[1] == s[0]) {
			first = true;
		}
		if (x[1] == s[1] && x[0] == s[0]){
			full = true;
			break;
		}	
	}

	if (full || (first && last)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
