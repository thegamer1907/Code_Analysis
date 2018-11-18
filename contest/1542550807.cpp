#include <iostream>
#include <string>
using namespace std;

int main(){
	bool fl = true, fl0 = false;
	string s;
	cin >> s;
	int n;
	cin >> n;
	string *X = new string[n];
	bool *First = new bool[n];
	bool *Second = new bool[n];
	for (int i = 0; i < n; i++){
		First[i] = false;
		Second[i] = false;
	}
	for (int i = 0; i < n; i++){
		cin >> X[i];
		if (X[i][0] == s[1]) First[i] = true;
		if (X[i][1] == s[0]) Second[i] = true;
		if (s == X[i]) {
			cout << "YES";
			fl = false;
			break;
		}
	}
	if (fl){
		for (int i = 0; i < n; i++){
			if (!First[i]) continue;
			for (int j = 0; j < n; j++){
				if (Second[j]) {
					cout << "YES";
					fl0 = true;
					break;
				}
			}
			if (fl0) break;
		}
		if (!fl0) cout << "NO";
	}
}