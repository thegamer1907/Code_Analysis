#include <iostream>

using namespace std;

#define sz(a) (int)a.size()

string s;
bool ok1, ok2;

int main () {
	cin >> s;
	for(int i = 0; i < sz(s); ++i) {
	 if(i + 1 < sz(s) && s[i] == 'A' && s[i + 1] == 'B' && !ok1) {
			ok1 = 1;
			++i;	
		}
		else if (i + 1 < sz(s) && s[i] == 'B' && s[i + 1] == 'A' && !ok2 && ok1) {
			ok2 = 1;
			++i;
		}
	}
	if(ok1 && ok2){
		cout << "YES\n";
		return 0;
	}
	ok1 = 0,  ok2 = 0;
	for(int i = 0; i < sz(s); ++i) {
		if (i + 1 < sz(s) && s[i] == 'B' && s[i + 1] == 'A' && !ok2) {
			ok2 = 1;
			++i;
		}
		else if(i + 1 < sz(s) && s[i] == 'A' && s[i + 1] == 'B' && !ok1 && ok2) {
			ok1 = 1;
			++i;	
		}
	}
	if(ok1 && ok2) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}