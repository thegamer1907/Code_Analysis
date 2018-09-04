#include <bits/stdc++.h>
 
using namespace std;
 
#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define mset(x,val) memset(x,val,sizeof(x))
#define pb push_back
#define in insert
#define mp make_pair
#define F first
#define S second
#define ifl(i,a,b) for(ll i=a;i<b;i++)
#define dfl(i,a,b) for(ll i=a-1;i>=b;i--)
#define get_string() getline(cin,s)     //for inputting string with spacebars in between
#define gcd(a,b) __gcd(a,b)
#define vi vector<ll>
#define vb vector<bool>
#define vit vi::iterator
#define PL pair<ll,ll>
#define PLL pair<ll,pair<ll,ll> >
#define PLLL pair<ll,pair<ll,pair<ll,ll> > >
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define present(container,element) (container.find(element)!=container.end())   //for sets
#define cpresent(container,element) (find(all(container),element)!=container.end())     //for vectors
#define tr(c,i) for(__typeof((c).begin() i=(c).begin();i!=(c).end();i++)
#define infi INT_MAX
#define cases() ll t;cin>>t;while(t--)
 
const ll N = 1e5+5;
const ll mod = 1e9+7;
const ll level = 20;
ll dx[] = {1,-1,0,0,1,1,-1,-1};
ll dy[] = {0,0,1,-1,1,-1,1,-1};
//const ld E = 2.71828;
//const ld PI = 3.14159265;

int main()
{
    speed;
    string s;
    cin>>s;
    ll l=s.length();
    ll lps[l];
    ll i=1;
    ll j=0;
   	lps[0]=0;
    while(i<l)
    {
    	if(s[i]==s[j])
    	{
    		lps[i]=j+1;
    		i++;
    		j++;
    		continue;
    	}
    	if(j==0)
    	{
    		lps[i]=0;
    		i++;
    	}
    	else
    	{
    		j=lps[j-1];
    	}
    }
    if(lps[l-1]==0)
    {
    	cout<<"Just a legend\n";
    	return 0;
    }
    ll ans=-1;
    ifl(i,0,l-1)
    {
    	if(lps[i]==lps[l-1])
    		ans = lps[i];
    }
    if(ans==-1)
    {
    	ans = lps[lps[l-1]-1];
    }
    if(ans==0)
    {
    	cout<<"Just a legend\n";
    }
    else
    {
    	ifl(i,0,ans)
    		cout<<s[i];
    }

    return 0;
}