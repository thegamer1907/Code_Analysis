#include <iostream>

using namespace std;

#define sz(a) (int)a.size()

string s;
int pos1, pos2;
bool ok1, ok2;

int main () {
	cin >> s;
	for(int i = 0; i < sz(s); ++i) {
	 	if(i + 1 < sz(s) && s[i] == 'A' && s[i + 1] == 'B' && !ok1) {
			ok1 = 1;
			pos1 = i;
		}
		if (i + 1 < sz(s) && s[i] == 'B' && s[i + 1] == 'A' && ok1 && i - pos1 > 1) {
			cout << "YES\n";
			return 0;
		}
		if (i + 1 < sz(s) && s[i] == 'B' && s[i + 1] == 'A' && !ok2) {
			ok2 = 1;
			pos2 = i;
		}
		if(i + 1 < sz(s) && s[i] == 'A' && s[i + 1] == 'B' && ok2 && i - pos2 > 1) {
			cout << "YES\n";
			return 0;	
		}
	}
	cout << "NO\n";
	return 0;
}