//Yash Kodesia, IIITM.
#include<bits/stdc++.h>
using namespace std;
#define   present(c,x)	((c).find(x) != (c).end())
#define   debug3(x,y,z)	cout<<x<<" "<<y<<" "<z<<"\n";
#define   rep2(i,k,n)	for(int i=k;i<=n;i++)
#define   repd(i,k,n)	for(int i=n;i>=k;i--)
#define   rep1(i,k,n)	for(int i=k;i<n;i++)
#define   linp2(x,y)	ll x,y; cin>>x>>y;
#define   debug2(x,y)	cout<<x<<" "<<y<<"\n";
#define   linp1(n)		ll  n; cin>>n;
#define   debug1(x)		cout<<x<<"\n";

#define   all(x)		x.begin(),x.end()
#define   vpll  		vector<pll >
#define   sz(a) 		a.size()
#define   vll  			vector<ll>
#define   MOD 			1000000007
#define   pll			pair<ll,ll>
#define   ppb			pop_back
#define   INF   		1e18+7

#define   ff  			first
#define   ss 			second
#define   pf			pop_front
#define   pb 			push_back
#define   ld			long double
#define	  eb			emplace_back
#define   vb  			vector<bool>
#define   ll			long long int
#define   vs			vector<string > 

const ll MAX2 = 105;
const ll MAX3 = 1005;
const ll MAX4 = 10005;
const ll MAX5 = 100005;
const ll MAX6 = 1000005;
const ll MAX7 = 10000005;


// Start
 
int mask[20]; 
void solve(){
	linp2(n,k);
	rep1(i,0,n){
		int cur_mask=0;
		rep1(j,0,k){
			int t;
			cin>>t;
			cur_mask=(cur_mask<<1)|t;
		}
		mask[cur_mask]=1;
	}
	string ok="NO";
	rep1(i,0,(1<<k)){
		rep1(j,i,(1<<k)){
			if(!(i & j) and mask[j] and mask[i])
				ok="YES";
		}
	}
	cout<<ok;
}
int main(){
  int t;
  t=1;
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
  cin.sync_with_stdio(0), cin.tie(0);
  //cin>>t;
  while(t--){
          solve();
          cout<<"\n";
     }
return 0;
}
 