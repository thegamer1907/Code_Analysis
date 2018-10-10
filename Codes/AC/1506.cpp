#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

const ll N=1e5+100;
ll n,s,k , a[N],b[N] ,l,mid,r,o;

ll Binary(ll k)
{
    ll p=0;
    for(ll i=0;i<n;i++)
        b[i] = a[i] + k*(i+1);
    sort(b,b+n);

    for(ll i=0;i<k;i++)
        p+=b[i];

    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	cin>>n>>s;
	for(ll i=0;i<n;i++)
        cin>>a[i];

	r=n+1;
	while(l<r-1)
    {
		mid=(l+r)/2;
		o=Binary(mid);

		if(o<=s)
			l=mid;
		else
			r=mid;
	}

    o=Binary(l);
	cout<<l<<" "<<o;
	return +0;
}
