#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define endl '\n'
#define len(s) (s).length()
#define boost ios::sync_with_stdio(0); cin.tie(0);

int main(){

	int n,m;
	cin>>n;
	int a[n],i;
	for(i = 0 ; i < n ; ++i)
		cin>>a[i];
	
	cin>>m;
	int b[m],j;
	for(i = 0 ; i < m ; ++i)
		cin>>b[i];

	sort(a,a+n);
	sort(b,b+m);

	int ans = 0;
	for(i = 0 ; i < n ; ++i)
		for(j = 0 ; j < m ; ++j){

			if(abs(a[i]-b[j])<=1)
			{
				ans++;
				b[j] = -10;
				a[i] = 10000;
			}
		}
	cout<<ans<<endl;
}