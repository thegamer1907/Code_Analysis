#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define mp make_pair
using namespace std;
#define MAXN 10000001
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	ll n,x,i,j,s,count,ans,k,l,r;
	cin>>n;
	ll a[MAXN];
	bool b[MAXN];
	memset(a,0,sizeof(a));
	memset(b,true,sizeof(b));
	for(i=0;i<n;i++){
		cin>>x;
		a[x]++;
	}
	b[1]=false;
	for(i=2;i<=MAXN;i++){
		if(b[i]==true){
			for(j=2*1ll*i;j<MAXN;j+=i){
				a[i]+=a[j];
				b[j]=false;
			}
		}
	}
	for(i=2;i<MAXN;i++){
		if(b[i]==false){
			a[i]=0;
		}
		a[i]+=a[i-1];
	}
	cin>>k;
	for(i=0;i<k;i++){
		cin>>l>>r;
		if(r>=MAXN){
			r=MAXN-1;
		}
		if(l>=MAXN){
		    l=MAXN;
		}
		ans=a[r]-a[l-1];
		cout<<ans<<endl;
	}
}