#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <iterator>
#include <ext/pb_ds/assoc_container.hpp>

#define x first
#define y second
#define mp make_pair
#define up_b upper_bound
#define low_b lower_bound
#define bit __builtin_popcount
#define all(x) x.begin(),x.end()

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const ll INF=1e18;
const ld EPS=1e-9;
const int inf=1e9;
const int MOD=1e9+7;
const int N=2e5+1;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

map<ll,ll>m,q;

ll a[N];

ll d[N];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=1ll*i*(i+1)/2+d[i-1];
	}
	ll ans=0,cnt=0;
	if(k==1){
		for(int i=1;i<=n;i++){
			m[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			cnt=m[a[i]];
			if(cnt>2){
				ans+=d[cnt-2];
			}
			m[a[i]]=0;
		}
		cout<<ans;
		return 0;
	}
	for(int i=n;i;i--){
		if(!a[i]){
			cnt++;
			continue;
		}
		if(abs(1ll*a[i]*k)<=inf){
			q[a[i]]+=m[a[i]*k];
			ans+=q[a[i]*k];
		}
		m[a[i]]++;
	}
	if(cnt>2){
		ans+=d[cnt-2];
	}
	cout<<ans;
	return 0;
}