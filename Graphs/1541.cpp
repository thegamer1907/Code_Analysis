#include <bits/stdc++.h>

#define Input       	freopen("D:/input/input.txt", "r", stdin)
#define fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define fo(i,n) 		for(int i=0; i<(n); ++i)
#define fpre(x)			fixed<<setprecision(x)

using namespace std;
typedef long long ll;
//link:http://codeforces.com/problemset/problem/500/A
//====================================================



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Input;
	ll n, t;
	ll por[100000];
	cin>>n>>t;
	fu(i, 1, n - 1){
		cin>>por[i];
	}
	ll go = 1;
	while (go <= t){
		go += por[go];
		if (go == t) {
		cout<<"YES";
		return 0;
		}
	}
	cout<<"NO";
	return 0;
}
