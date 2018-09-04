#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fs first
#define se second
#define ll long long
#define pb push_back
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i >= l; i--)
#define mod       1000000007
const int N = 100005;
ll b,s,c,ps,pc,pb,nc,nb,ns,r,x;
string str;
bool f(ll k)
{
	ll rb = max( k*b - nb, x);
	ll rs = max( k*s - ns, x);
	ll rc = max( k*c - nc, x);
	return ((r - (rb*pb + rc*pc + rs*ps))>=0);
}
ll num(ll k,ll n)
{
	if(k==0)return 1e15;
	return n/k;
}
int main()
{
	cin>>str;
	cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
	rep(i,0,str.length())
	{
		if(str[i] == 'B')b++;
		else if(str[i] == 'C')c++;
		else s++;
	}
	ll t = min( num(s,ns) , min(num(b,nb),num(c,nc)) );
	nb -= t*b, nc -= t*c, ns -=t*s;
	ll lo=0,hi=1e12;
		while(lo<=hi)
		{
			ll mid = (lo+hi)/2;
			if(f(mid))lo = mid+1;
			else hi = mid-1;
		}
		cout<<lo-1+t;
	return 0;
}