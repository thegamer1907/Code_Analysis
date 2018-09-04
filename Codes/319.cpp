#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main()
{
	if (fopen("input.txt","r")) {
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	}

	ll n;
	cin>>n;

	ll a[n],i;
	for (i=0;i<n;i++)
		cin>>a[i];

	for (i=1;i<n;i++)
		a[i]+=a[i-1];

	ll m,q;
	cin>>m;
	while (m--) {
		cin>>q;
		ll *x=lower_bound(a,a+n,q);
		cout<<(x-a)+1<<endl;
	}
	return 0;
}