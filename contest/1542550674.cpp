//template by chamow
#include<bits/stdc++.h>
/*-------------------------------------------------------- */
using namespace std;

/*-------------------------------------------------------- */

#define rep(i,val,n) for(ll i=val;i<n;i++)
#define per(j,val,n) for(ll j=val;j>=n;j--)
#define pb push_back
#define pi 3.14157
#define mp make_pair
#define MODULO 1000000007
#define INF 1000000000000000
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vecit vector<ll> :: iterator
#define vecpit vector< pair<ll, ll> > :: iterator
#define f first
#define s second


/*-------------------------------------------------------- */

typedef long long ll;
typedef vector<bool> boolean;
typedef vector<ll> vec;
typedef vector< pair<ll, ll> > vecpair;


/*-------------------------------------------------------- */

ll gcd(ll a, ll b)
{
	if(b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
	return ((a*b)/gcd(a,b));
}

/*-------------------------------------------------------- */

int main()
{
	fastread;
	string str;
	cin>>str;
	bool possible = false;
	vector<string> arr;
	ll n;
	cin>>n;
	rep(i,0,n)
	{
		string dummy;
		cin>>dummy;
		if(dummy == str)
		{
			possible = true;
			cout<<"YES";
			return 0;
		}
		arr.pb(dummy);
	}
	bool poss1 = false;
	bool poss2 = false;
		
	rep(i,0,n)
	{
		if(arr[i][0] == str[1])
		{
			poss1 = true;
		}
		if(arr[i][1] == str[0])
		{
			poss2 = true;
		}
	}
	if(poss1 && poss2)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
