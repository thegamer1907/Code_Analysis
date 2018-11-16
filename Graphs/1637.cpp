                 /*Rabbi Zidni Fiha Ilma
                
           Lose hope, but keep faith. Remember
        there is someone who always protect you*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double db; 
ll mx=1,mn=1e9+7; 
bool bysec(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
#define Pi acos(-1)
#define in(n) scanf("%lld",&n)
#define inf(n) scanf("%Lf",&n)
#define inc(n) scanf("%c",&n)
#define ins(n) scanf("%s",&n)
#define pf(n) printf("%lld",n)
#define pff(n) printf("%f",n)
#define pfc(n) printf("%c",n)
#define pfs(n) printf("%s",n)
#define mod(x) x%=1000000007
#define trav for(ll i=0; i<n; i++)
#define loop(x,a,b) for(ll x=a; x<=b; x++) 
#define rloop(x,a,b) for(ll x=a; x>=b; x--)
#define nl pfs("\n")
#define sp pfs(" ")
#define pb push_back
#define root(x,y) (exp(log(x)/y))
bool strfind(string &st,string &s){
ll m=s.length(),n=st.length(),i,j; 
    for(i=0;i<=n-m;i++){
        for(j=0;j<m;j++)if(st[i+j]!=s[j])
            break;  
        if(j==m)return 1;
    }return 0;
}
#define ff first   
#define ss second  
#define itr ::iterator
#define b2e(xx) xx.begin(),xx.end()
#define map2vec(mp,v) copy(b2e(mp),back_inserter(v))
#define itl(x,it) for(it=x.begin();it!=x.end();it++)
#define tcl(T) for(ll t=1; t<=T; t++)
#define pc printf("Case %lld: ", t)

ll g[10];

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
    ll n,m; 
    in(n),in(m);
    ll a[n];
    loop(i,1,n-1)
    {
    	in(a[i]);
    	//a[i]+=i; 
    	//cerr<<a[i]<<" "; 
    }cerr<<"Debug:\n";
    loop(i,1,n-1)
    {
    	//in(a[i]);
    	//a[i]+=i; 
    	cerr<<a[i]<<"\n"; 
    }
    for(ll i=1; i<m; )
    { 
    	i+=a[i];
    	if(m==i) 
    	{
    		pfs("YES"),nl;
    		return 0;
    	}
    }
    pfs("NO"),nl;
    return 0;
}