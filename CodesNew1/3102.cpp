#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define SYNC() ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define FA(x,y) for(auto& x: y)
#define FOR(i,a,b) for(int i = a, _a =b; i < _a; i++)
#define FORN(i,a,b) for(int i = a, _a = b; i <= _a; i++)
#define RFOR(i,a,b) for(int i = a-1; i >= b; i--)
#define RFORN(i,a,b) for(int i = a; i >= b; i--)
#define debug(a) cerr<<#a<<" = "<<(a) << endl
#define debug2(a,b) cerr<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b) << endl
#define debug3(a,b,c) cerr<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c) << endl
#define debug4(a,b,c,d) cerr<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c) <<", "<<#d<<" = "<<(d) << endl
#define all(s) s.begin(), s.end()
#define ull unsigned long long
#define ui unsigned int
#define ll long long
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second
#define be begin()
#define rbe rbegin()
#define en end()
#define in insert
#define bye return 0;
#define sc(a) scanf("%d", &a)
#define sc2(a,b) scanf("%d%d", &a, &b)
#define sc3(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define MID(l,r) (l+r)/2
#define si(x) scanf("%d",&x)
const int inf = 1e9 + 69;
const int MAX = 1e6;
using namespace std;


int n, k;
int a[MAX];

int main()
{

#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	freopen("C:/Users/ngocm/OneDrive/Desktop/OLP2018/OLP2018/input.txt", "r", stdin);

#endif
	SYNC();
	

	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) cin >> a[i];

	int l = 1, r = 1, cnt = 0, mx = 0, idx = 0, cur = 0;


	while (l <= n  and r <= n)
	{
		if (a[r] == 1) r++;		
		else if (cnt < k) cnt++, r++;
		else
		{
			//cout << l << " " << r - 1 << endl;
			if (mx < r - l) mx = r - l, idx = l;
			while (a[l] == 1 and l <= r) l++;			
			l++;
			r++;
		}
	}


	//cout << l << " " << r - 1 << endl;

	if (mx < r - l) mx = r - l, idx = l;

	cout << mx << endl;
	
	
	for (int i = idx; i < idx+mx; i++) a[i] = 1;

	for (int i = 1; i <= n; i++) cout << a[i] << " ";
	
	
 	bye
}