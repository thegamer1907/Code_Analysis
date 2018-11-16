#include <bits/stdc++.h>

using namespace std;
int l, r, lr;
int main () {
	string a;
	cin >> a;
	int n = a.size();
	int i = 0;
	while (i < a.size()) {
		if (a[i] == 'A' && a[i + 1] == 'B' && i + 1 < a.size()) {
			if (i + 2 < a.size() && a[i + 2] == 'A') {
			 	lr ++;
				i += 3;
			}	
			else {
				l ++;
				i += 2;
			}
		}
		else if (a[i] == 'B' && a[i + 1] == 'A' && i + 1 < a.size()) {
			if (i + 2 < a.size() && a[i + 2] == 'B') {
				lr ++;
				i += 3;
			}
			else {
				r ++;
				i += 2;
			}
		}
		else {
			i ++;
		}		
	}
	if (l != 0 && r != 0) {
		cout << "YES";
	}
	else if (l != 0 && lr != 0) {
		cout << "YES";
	}
	else if (r != 0 && lr != 0){
		cout << "YES";
	}
	else if (lr > 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}