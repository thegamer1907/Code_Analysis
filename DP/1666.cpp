			/*Lose hope, but keep faith. 
			Remember there is someone 
			who always protect you*/

/* Author: Md_Mahfuzur_Rahman */

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double db; 
ll mn=INT_MAX,mx=INT_MIN; 
bool bysec(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
#define Read() freopen("in.txt", "r", stdin)
#define Write() freopen("out.txt", "w", stdout)
#define Fast_IO ios_base::sync_with_stdio(false)
#define PII pair<ll,ll>
#define PIS pair<ll,string>
#define PIC pair<ll,char>
#define PSI pair<string,ll>
#define PCI pair<char,ll>
#define mod(x) x%=1000000007
#define trav for(ll i=0; i<n; i++)
#define loop(x,a,b) for(ll x=a; x<=b; x++) 
#define rloop(x,a,b) for(ll x=a; x>=b; x--)
#define nl pfs("\n")
#define sp pfs(" ")
#define pb push_back
#define rev(x) reverse(b2e(x))
#define root(x,y) (exp(log(x)/y))
#define Pi acos(-1)
#define in(n) scanf("%lld",&n)
#define in2(n,m) in(n),in(m)
#define in3(a,b,c) in2(a,b),in(c)
#define in4(a,b,c,d) in3(a,b,c),in(d)
#define inf(n) scanf("%Lf",&n)
#define inc(n) scanf("%c",&n)
#define ins(n) scanf("%s",&n)
#define pf(n) printf("%lld",n)
#define pff(n) printf("%f",n)
#define pfc(n) printf("%c",n)
#define pfs(n) printf("%s",n)
#define inst(s) s=inst(s)
#define cout(x,y) cout<<fixed<<setprecision(x)<<y
bool strfind(string &st,string &s){
ll m=s.length(),n=st.length(),i,j; 
    for(i=0;i<=n-m;i++){
        for(j=0;j<m;j++)if(st[i+j]!=s[j])
            break;  
        if(j==m)return 1;
    }return 0;
}
#define fs first   
#define sd second  
#define itr ::iterator
#define b2e(xx) xx.begin(),xx.end()
#define map2vec(mp,v) copy(b2e(mp),back_inserter(v))
#define itl(x,it) for(auto it=x.begin();it!=x.end();it++)
#define tcl(TCS) for(ll tcs=1; tcs<=TCS; tcs++)
#define pc printf("Case %lld: ", tcs)

int main()
{
	//Fast_IO;
	//Read(),Write();
	//cin.tie(NULL),cout.tie(NULL);
	
	string s;
	cin>>s;
	ll n=s.length();
	//n--;
	trav 
	{
		if(s[i]=='A' and s[i+1]=='B')
		{ 
			loop(j,i+2,n-1)
			{
				if(s[j]=='B' and s[j+1]=='A')
				{
					cout<<"YES\n";
					return 0;
				}
			}
		}
	}
	trav 
	{
		if(s[i]=='B' and s[i+1]=='A')
		{ 
			loop(j,i+2,n-1)
			{
				if(s[j]=='A' and s[j+1]=='B')
				{
					cout<<"YES\n";
					return 0;
				}
			}
		}
	}
	cout<<"NO\n";
	return 0;
}