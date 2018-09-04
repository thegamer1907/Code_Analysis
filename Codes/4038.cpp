#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define pb push_back
#define pf push_front
#define F first
#define S second
#define ins insert
//#define int long long
#define fbo find_by_order
#define ook order_of_key
using namespace std;
using namespace __gnu_pbds;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
const int MAXN=1e5+1,INF=1e9+10,MOD=1e9+7;

int n,m;
set <pii> s;

int32_t main(){
	//ios_base::sync_with_stdio(0);
	scanf("%d %d",&n,&m);
	int a[n][m],mx[n][m];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			scanf("%d",&a[i][j]);
		}
	}
	if(n>=m){
		for(int i=0;i<m;++i){
			mx[n-1][i]=n-1;
			for(int j=n-2;j>=0;--j){
				if(a[j][i]<=a[j+1][i]){
					mx[j][i]=mx[j+1][i];
				}else{
					mx[j][i]=j;
				}
			}
		}
		int k;
		scanf("%d",&k);
		while(k--){
			int l,r;
			scanf("%d %d",&l,&r);
			l--;r--;
			bool b=1;
			for(int i=0;i<m;++i){
				if(mx[l][i]>=r){
					printf("Yes\n");
					b=0;
					break;
				}
			}
			if(b)	printf("No\n");
		}
	}else{
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				s.ins(pii(j,j));
				bool b=1;
				for(int k=j+1;k<n;++k){
					if(b&&a[k][i]>=a[k-1][i]){
						s.ins(pii(j,k));
					}else{
						b=0;
					}
				}
			}
		}
		int t;
		scanf("%d",&t);
		for(int i=0;i<t;++i){
			int l,r;
			scanf("%d %d",&l,&r);
			if(s.count(pii(l-1,r-1))){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}
	}
	return 0;
}
