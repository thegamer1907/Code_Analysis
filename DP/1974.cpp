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
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define x first 
#define y second 
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

/*bool comp(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    if(a.first!=b.first)
        return(a.first<b.first);
        else
            return (a.second>b.second); //comp of vector of pairs
         
} */
// priority_queue <ll, vector<ll>, greater<ll> > q; //min heap
/*---------------------------------------------------------*/
//r q d

int main()
{  
    fastread;
   ll n,m,count=0;
    cin>>n>>m;
    vec v(n),p(n);
    
    rep(i,0,n)
        cin>>v[i];
    
    set<ll> s;
    per(i,n-1,0)
    {
        ll si1=s.size();
        s.insert(v[i]);
        
        if(s.size()>si1)
        count++;
        
        p[i]=count;
        
    }
    
    rep(i,0,m)
    {
        ll x1;
        cin>>x1;
        cout<<p[x1-1]<<"\n";
    }
      return 0; 
 }
   

/*--------------------------------------------------------------------*/


    

