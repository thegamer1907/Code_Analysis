// One day i will make you mine A...
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define Aloveg ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const int mn = 1e6+5;

map<ll, ll> l, r;

int main()
{
    Aloveg

    int n; ll k; cin>>n>>k;
    ll a[n+1];
    for(int i=0; i<n; i++){
    	cin>>a[i];
    	r[a[i]] += 1;
	}
	ll ag = 0;
	for(int i=0; i<n; i++){
		ll la = 0, ra = 0;
		if(a[i]%k == 0)
			la = l[a[i]/k];
		r[a[i]] -= 1; l[a[i]] += 1;
		ra = r[a[i]*k];
		ag += la*ra;
	}
	cout<<ag;
    
    return 0;
}

