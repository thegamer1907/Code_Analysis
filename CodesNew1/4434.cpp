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
const int MAXN=5e5+1,INF=1e9+10,MOD=1e9+7;

int n;
string s[MAXN];

int32_t main(){
	//ios_base::sync_with_stdio(0);
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		{
			char c[MAXN];
			scanf("%s",c);
			s[i]=c;
		}
	}
	for(int i=n-2;i>=0;--i){
		int sz=s[i].size();
		sz=min(sz,(int)s[i+1].size());
		bool b=1;
		for(int j=0;j<sz&&b;++j){
			if(s[i][j]>s[i+1][j]){
				while(s[i].size()>j){
					s[i].pop_back();
				}
				b=0;
			}else if(s[i][j]<s[i+1][j])	b=0;
		}
		if(b){
			while(s[i].size()>s[i+1].size())	s[i].pop_back();
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<s[i].size();++j){
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
