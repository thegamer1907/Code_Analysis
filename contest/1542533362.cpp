#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define debug1(x)		  cout<<x<<endl
#define debug2(x,y)       cout<<x<<"   "<<y<<endl
#define debug3(x,y,z)     cout<<x<<"   "<<y<<"   "<<z<<endl
#define debug4(x,y,z,xy)  cout<<x<<"   "<<y<<"   "<<z<<"   "<<xy<<endl
 
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld%lld",&x,&y)
#define slll(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define pl(x) printf("%lld\n",x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second
#define MAX 1000000
#define mod 1000000007

map <ll,ll> m;
ll POW[10];

int main(){
	//freopen("task.in","r",stdin); freopen("task.out","w",stdout);
	ll i,n,k;
	cin>>n>>k;
	POW[0]=1,POW[1]=2,POW[2]=4,POW[3]=8,POW[4]=16;

	for(i=0;i<n;i++){
		ll no=0;
		for(ll j=0;j<k;j++){
			ll x;cin>>x;
			no=no*2+x;
		}
		
		m[no]++;
	}	

	for(i=0;i<POW[k];i++){
		for(ll j=0;j<POW[k];j++){
			if(m[i]>0&&m[j]>0){	
				if((i&j)==0){
					cout<<"YES\n";
					return 0;
				}
			}
		}
	}

	cout<<"NO\n";
}	