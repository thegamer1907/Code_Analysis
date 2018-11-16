#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define f(i,a,n) for (ll i=a;i<n;i++)
#define rev(i,a,b) for (ll i=a;i>b;i--)
#define fi first
#define s second
#define pb push_back
#define pf push_front
#define el "\n"
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inf 1e9
#define test 1e6
const ll mod = 1e9+7;



int main()
{
	ll n,m;
	cin>>n>>m;
	if (n>=m) return cout<<n-m<<el,0;
	else
	{
		ll count=0;
		while(m!=n)
		{
			if (m<n) m+=1;
			else
			{
				if (m&1) m+=1;
				else m=m/2;
			}
			count++;
		}
		return cout<<count<<el,0;
	}
}