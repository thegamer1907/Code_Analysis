#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define F(i,n) for(int i=0;i<n;i++)
#define F1(x,i,n) for(int i=x;i<n;i++)
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define a(n) vector<ll> a(n)
#define mem(x,val) memset(x,val,sizeof(x))
#define mod 1000000007
#define in(a,n) F(i,n) cin>>a[i]
#define out(a,n); F(i,n) cout<<a[i]<<" "; cout<<endl;
#define f first
#define s second

int main()
{
 	
    	ll n,m;
    	cin>>n>>m;
    	ll a[n];
    	in(a,n);
    	ll mx=-1,kl=m;
    	F(i,n)
    	mx = max(mx,a[i]);
    	ll mn=INT_MAX; ll z;
    	while(m!=0){
    		z=0;mn=a[0];
    		for(ll i=0;i<n;i++){
    			if(mn>=a[i])
    				{
					z=i;mn=a[i];}
    		}
    		a[z]+=1;
    	
		m--;
		}
	//	F(i,n)
	//	cout<<a[i]<<" ";
    	ll k=0;
    	F(i,n)
    	k=max(k,a[i]);
    	cout<<k<<" "<<mx+kl<<endl;

}
