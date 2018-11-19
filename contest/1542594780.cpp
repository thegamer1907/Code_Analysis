#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <map>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

#define forsn(i,s,n) for(int i = (int)(s);i < (int)(n);i++)
#define forn(i,n) forsn(i,0,n)
#define dforsn(i,s,n) for(int i = (int)((n)-1);i >= (int)(s);i--)
#define dforn(i,n) dforsn(i,0,n)
#define F first
#define S second

typedef long long int tint;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin >> s;
	int n; cin >> n;
	bool ok[2] = {};
	forn(i,n) {
		string t; cin >> t;
		if (t[0] == s[1]) ok[1]=true;
		if (t[1] == s[0]) ok[0]=true;
		if (s == t) ok[0] = ok[1] = true;
	}
	cout << ((ok[0] && ok[1])? "YES" : "NO") << endl;

}

