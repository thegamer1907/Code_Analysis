#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<time.h>
#include<numeric>
#include<assert.h>
#include<iostream>
using namespace std;
typedef long long LL;
typedef pair<int,int>pi;
#define ALL(A) A.begin(),A.end()
int n,k;	
int has[33];
int ans;
void dfs(int cur,vector<int>val,int use){
	if(ans)return;
	if(cur>=(1<<k)){
		bool flag=use;
		for(int x:val){
			if(x<0){flag=0;break;}
		}
		if(flag){
			ans=1;
		}
		return ;
	}
	dfs(cur+1,val,use);
	if(has[cur]){
		for(int i=0;i<k;i++){
			if(cur>>(k-1-i)&1)val[i]--;
			else val[i]++;
		}
		dfs(cur+1,val,1);
	}
}
int main(){
	while(scanf("%d%d",&n,&k)!=EOF){
		memset(has,0,sizeof has);
		for(int i=0;i<n;i++){
			int x=0;
			for(int j=0;j<k;j++){
				int y;scanf("%d",&y);
				x=x<<1|y;
			}
			has[x]=1;
		}
		ans=0;
		vector<int>v(k,0);
		dfs(0,v,0);
		puts(ans?"YES":"NO");
	}
	return 0;
}
