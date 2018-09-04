#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
#define ll long long
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define X first
#define Y second
#define MAXN 200005
#define mod 1000000007
#define X first
#define Y second


int main(){
	int n; cin >> n;
	int a[100005];
	int cur = INT_MAX;
	int ans;
	FI(i,n){
		cin >> a[i];
		int r = a[i]+n-1 - i;
		r /= n;
		if(r < cur){
			cur = r;
			ans = i+1;
		}
	}
	cout << ans;
}
