#include <iostream>
using namespace std;

int main() {
	bool fi = false;
	char w1, w2, b, e;
	cin >> w1 >> w2;
	int n;
	cin >> n;
	bool s[n], t[n];
	for(int i = 0; i < n; i++) {
		cin >> b >> e;
		s[i] = false; t[i] = false;
		if(b == w2) s[i] = true;
		if(e == w1) t[i] = true;
		if(b == w1 && e == w2) {
			fi = true;
			break;
		}
	}
	if(not fi) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {;
				if(s[i] && t[j]) {
					fi = true;
					break;
				}
			}
		}
	}
	if(fi) cout << "YES";
	else cout << "NO";
	return 0;
}