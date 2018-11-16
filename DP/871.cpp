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
  ll n;
    ll max1=-INF;
    cin>>n;
    vec v(n);
    
    rep(i,0,n)
        cin>>v[i];
    
    rep(i,0,n)
    {
        rep(j,i,n)
        {
            ll count=0;
            vec v1=v;
            
            rep(k,i,j+1)
                v1[k]=1-v1[k];
            
            rep(k,0,n)
            {
                if(v1[k])
                    count++;
            }
            max1=max(max1,count);
            
        }
    }
    cout<<max1<<endl;
      return 0; 
 }
   

/*--------------------------------------------------------------------*/


    

