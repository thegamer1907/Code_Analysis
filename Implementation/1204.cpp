#include<bits/stdc++.h>
/*-------------------------------------------------------- */
using namespace std;

/*-------------------------------------------------------- */

#define rep(i,val,n) for(ll i=val;i<n;i++)
#define per(j,val,n) for(ll j=val;j>=n;j--)
#define pb push_back
#define pi 3.14159265
#define mp make_pair
#define MODULO 1000000007
#define INF 1000000000000000
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);


/*-------------------------------------------------------- */
typedef long double ld;
typedef long long ll;
typedef vector<bool> boolean;
typedef vector<ll> vec;


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
// priority_queue <ll, vector<ll>, greater<ll> > q; //min heap
/*---------------------------------------------------------*/
//r q d
int main()
{
ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    rep(i,0,t)
    {
        vec v;
        rep(j,0,n-1)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                v.pb(j);
            }
        }
        rep(j,0,v.size())
        {
            s[v[j]]='G';
            s[v[j]+1]='B';
        }
    }
    cout<<s;
    return 0;    
}
/*--------------------------------------------------------------------*/




