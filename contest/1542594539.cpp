#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pii pair <int,int>
#define ull unsigned long long
#define mp make_pair
#define s second
#define f first                                          
#define _ ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

const int maxn = (int)(2e5)+2;
const int mod = (int)(1e9)+7;

char ach[111], bch[111];
int n;

int main() {
	_
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	#endif
	char a,b;
	cin >> a >> b;
	cin >> n;
	bool ok = false;
	for (int i = 1; i <= n; i++) {
	 	cin >> ach[i]>>bch[i];
	 	if (ach[i]==a&&bch[i]==b) ok = 1;
	}
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++) {
	 	if (bch[i]==a&&ach[j]==b) ok = 1;
	}
	if (ok)
		puts("YES");
	else
		puts("NO");
	return 0;
}