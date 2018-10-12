#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define lob lower_bound
#define upb upper_bound
#define ff first
#define ss second
#define beg begin()
#define en end()
#define rbeg rbegin()
#define ren rend()
#define sz size()
#define mem(a,b) memset(a,b,sizeof a)
#define mem0(a) memset(a,0,sizeof a)
#define mem1(a) memset(a,1,sizeof a)
#define memm(a) memset(a,-1,sizeof a)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
//~ const int tam=1000;
const int inf=(int)1e9;


int main(){
	ios::sync_with_stdio(false);
	ll m,n=9223372036854775801;
	cin>>m;
	
	ll lo=0,hi=9223372036854775800;
	
	while(hi>=lo){
		ll mid=(lo+hi)/2;
		ll res=0;
		for(ll i=2; i*i*i<=mid;++i){
			res+=(mid/(1ll*i*i*i));
		}
		//~ cerr<<lo<<" " <<mid<<" "<<hi<< " ";
		//~ cerr<<res;cerr<<endl;
		if(res>m){
			hi=mid-1;
		}else if(res<m){
			lo=mid+1;
		}else{
			n=min(n,mid);
			hi=mid-1;
		}
	}
	
	if(n==9223372036854775801){
		cout<<"-1";
	}else{
		cout<<n;
	}
	cout<<endl;
	
	return 0;
}
