#include <iostream>
using namespace std;

int main()  {
	string s;
	cin >> s;
	int n;
	cin >> n;
	bool ok1=false, ok2=false;
	for (int i=0;i<n;i++) {
		string t;
		cin >> t;
		if (s==t) ok1=ok2=true;
		if (s[0]==t[1]) ok2=true;
		if (s[1]==t[0]) ok1=true;
	}
	if (ok1 and ok2) cout << "yes" << endl;
	else cout << "no" << endl;
}
