#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;
	getline(cin,s);
	bool ok = false;
	for (int i=0;i<s.size();i++){
		if ( s[i] == 'Q' || s[i] == 'H' || s[i] == '9')
			ok =true;
	}

	if (ok) cout << "YES" << endl;
	else cout << "NO" << endl;

	return (0);

}