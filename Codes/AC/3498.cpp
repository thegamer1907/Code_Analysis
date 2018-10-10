#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")


#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long double ld;
typedef long long ll;

ll x, n;
ll p1, p2;
ll t;

bool f(ll r)
{
	ll rr=n;
	p1=0; p2=0;
	while (rr>0)
	{
		p1+=min(rr, r);
	    rr-=min(rr, r);
	    p2+=rr/10;
	    rr-=rr/10;
	}
	if (p1>=p2)
	  return true;
	else
	  return false;
}

void binsearch(ll l, ll r)
{
	ll mid=(l+r)/2;
	p1=0;
	p2=0;
	if (r==l+1 || r==l)
	  t=r;
	else if (f(mid))
	  binsearch(l, mid);
	else
	  binsearch(mid, r);
}

bool g(ll q)
{
	ll rr=n;
	p1=0; p2=0;
	while (rr>0)
	{
		p1+=min(rr, q);
	    rr-=min(rr, q);
	    p2+=rr/10;
	    rr-=rr/10;
	}
	if (rr==0)
	  return true;
	else
	  return false;
}

int main()
{
    cin >> n;
    binsearch(0ll, n);
  /*  while (!g(t))
    {
		t++;
	}*/
	cout << t;
}
