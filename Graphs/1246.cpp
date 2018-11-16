#include <bits/stdc++.h> 
#define ll long long
#define l1 long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{ 
    fast
    ll n, t;
    cin>>n>>t;
    ll a[n];
    for(ll i=1; i<n; i++)
    cin>>a[i];
    ll i=1;
    while(i<n)
    {
        if(i==t) {  cout<<"YES"; return 0;  }
		i=i+a[i];
		if(i==t) {  cout<<"YES"; return 0;  }
    }
    cout<<"NO";
    return 0;
}