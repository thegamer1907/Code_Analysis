#include<bits/stdc++.h>
#define ll long long
#define M 100005
#define oo 1000000000
#define P 999911659
#define O_O(x) cout<<x<<'\n'
#define V_V(x) scanf("%d",&x)
#define S 19
using namespace std;
int n,m,cnt[100],ans;
int main(){
	int i,j,res=0,a;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		res=0;
		for(j=1;j<=m;j++){
			scanf("%d",&a);
			if(a)res|=(1<<(j-1));
		}
		cnt[res]++;
	}
	if(n==1||cnt[0]){
		if(cnt[0])puts("YES");
		else puts("NO");
		return 0;
	}
	for(int i=0;i<(1<<m);i++){
		for(int j=0;j<(1<<m);j++){
			if(i==j)continue;
			if(!cnt[i]||!cnt[j])continue;
			if(!(i&j)){
				ans=1;
			}
		}
	}
	if(ans)puts("YES");
	else puts("NO");
	return 0;
}
/*
5 3
0 0 0
1 1 0
1 1 1
1 0 0
1 0 0
*/
