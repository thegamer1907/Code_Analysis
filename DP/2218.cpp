#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N = 1e5;
const int INF = 1e9;

int arr[N+5],ans[N+5];
vector<pii> query;
bool flag[N+5];

int main(){
	memset(flag,false,sizeof(flag));
	
	int n,m,x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	for(int i=0;i<m;i++){
		scanf("%d",&x);x--;
		query.pb(mp(x,i));
	}
	sort(query.begin(), query.end());
	int idx=n-1,cnt=0;
	for(int i=m-1;i>=0;i--){
		for(;idx>=query[i].fi;idx--){
			if(!flag[arr[idx]]){
				cnt++;
				flag[arr[idx]]=true;
			}
		}
		ans[query[i].se]=cnt;
	}
	for(int i=0;i<m;i++) printf("%d\n",ans[i]);
	return 0;
}
