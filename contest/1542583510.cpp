#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 5e5+1;
const int inf = 0x7fffffff;

int n,k,a[N],pos[N];
bool can[1232],use[134];

int cnt(int x){
	int ret=0;
	int i=0;
	while(x){
		ret+=x&1;
		if(x&1)pos[++pos[0]]=i;
		x>>=1;
		i++;
	}
	return ret;
}

void dfs(int x,int ed,int res){
	if(x==ed+1){
		int now=0;
		for(int i=0;i<=4;++i)
		if(use[i])now|=1<<(i);
		if(can[now]){
			cout<<"YES";
			exit(0);
		}
		return;
	}
	for(int i=0;i<2;++i){
		use[pos[x]]=i;
		dfs(x+1,ed,res);
	}
}

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	for(int t=1,x;t<=k;++t){
		scanf("%d",&x);
		a[i]|=(x<<(t-1));
	}
	for(int i=1;i<=n;++i)
	if(!a[i])return 0*printf("YES");
	for(int i=1;i<=n;++i)can[a[i]]=1;
	for(int i=0;i<16;++i)
	for(int j=i+1;j<16;++j)
	if(can[i]&&can[j]&&((i&j)==0))
	return 0*printf("YES");
	cout<<"NO";
}
