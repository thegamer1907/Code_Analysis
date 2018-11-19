/*In the name of Almighty Allah*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,ta;
	int n;
	bool yes = 0, yes1 = 0, yes2 = 0;
	cin >> s;
	t = s;
	reverse(t.begin(),t.end());
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> ta;
		if ( ta == t ) yes = 1;
		if ( t[0] == ta[0] ) yes1 = 1;
		if ( t[1] == ta[1] ) yes2 = 1;
		if ( ta == s ) yes = 1;
	}

	if ( yes ) cout << "YES";
	else if ( yes1 && yes2 ) cout << "YES";
	else cout << "NO";
	return 0;
}
