#include<bits/stdc++.h>
using namespace std; 
#define pb push_back
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define ms(s, n) memset(s,n,sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define all(x) x.begin(),x.end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
 
ll fpow(ll n,ll k,ll p = MOD){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%p;n=n*n%p;}return r;}
ll inv(ll a,ll p=MOD){return fpow(a,p-2,p);}
ll Sqrt(ll x){if(x==0 || x==1)return x;ll start=1,end=x,ans;while(start<=end){ll mid=(start+end)/2;if(mid*mid==x)return mid;if(mid*mid<x){start=mid+1;ans=mid;}else end=mid-1;}return ans;}
ll power(ll x,ll y){if (y==0)return 1;else if (y%2==0)return power(x,y/2)*power(x,y/2);else return x*power(x,y/2)*power(x,y/2);}  
ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b; b=r;} return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
void in(ll &no){bool neg=false;register ll c;no=0;c=getchar();if(c=='-'){neg=true;c=getchar();}for(;(c>47&&c<58);c=getchar())no=no*10+c-48;if(neg)no*=-1;}
ll maxx(ll a,ll b){if(a>b)return a;return b;}
ll minn(ll a,ll b){if(a<b)return a;return b;}

int main() {    
      
    ll n;
    cin>>n;
    char a[n][5];
    int flag=0;
    FOR(i,0,n)
    {
    	FOR(j,0,5)
    	{
    		cin>>a[i][j];
    	}
    }
    ll x;
    FOR(i,0,n)
    {
    	if(a[i][0] =='O' and a[i][1] =='O'){
    		flag=1;
    		x = i;
    		a[i][0] = '+';
    		a[i][1] = '+';
    		break;
    	}
    	if(a[i][3] =='O' and a[i][4] =='O'){
    		flag=1;
    		x = i;
    		a[i][3] = '+';
    		a[i][4] = '+';
    		break;
    	}
    }
    if(flag){
    	cout<<"YES\n";
    	FOR(i,0,n)
    {
    	FOR(j,0,5)
    	{
    		cout<<a[i][j];
    	}
    	cout<<endl;
    }
    }else
    	cout<<"NO\n";
    return 0;
}