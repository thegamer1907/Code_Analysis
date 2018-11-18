#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio();
#define ll long long
#define MAXN 112

using namespace std;

string p, s[MAXN];

int n, first, last, same;

int main(){_
	cin >> p;
	cin >> n;
	for(int i=0; i < n; i++){
		cin >> s[i];
	}
	first = last = same = 0;
	for(int i=0; i < n; i++){
		first |= (p[0] == s[i][1]);
		last |= (p[1] == s[i][0]);
		same |= (p == s[i]);
	}
	cout << (((first && last) || same) ? "YES" : "NO" ) << endl;
	return 0;
}
// 1509688799523
