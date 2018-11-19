#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define se second
#define fi first
#define pb push_back
const int N=1e5 + 5;
int g[N][5];

set<int> st;

int main(){

//	freopen("in.txt","r",stdin);

	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i < n;i++){
		int c=0;
		for(int j=0;j < k;j++){
			scanf("%d",&g[i][j]);
			c+=g[i][j];
		}
		if(!c){
			puts("YES");
			return 0;
		}
	}
	for(int i=0;i < n;i++){
		int msk=0;
		for(int j=0;j < k;j++){
			msk*=2;
			msk+=g[i][j];
		}

		for(int j=0;j < (1 << k);j++){
			bool f=0;
			for(int in=0;in < k;in++){
				if(((msk >> in) & 1) && ((j >> in) & 1)) f=1;
			}
			if(!f && st.find(j) != st.end()){
				puts("YES");
				return 0;
			}
		}
		st.insert(msk);
	}
	puts("NO");

	return 0;
}
