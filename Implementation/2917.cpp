#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double f80;
#define int long long int
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define fr(i, a, b) for(int i = a; i <= b; i++)
#define IO ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define vi vector

string s[2] = {"I love that ", "I hate that "};
signed main(){
	int n;
	cin >> n;
	fr(i, 1, n - 1){
		cout << s[i & 1];
	}
	if(n & 1)
		cout << "I hate it";
	else
		cout << "I love it";
}