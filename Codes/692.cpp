#include <cstdio>
#include <cstdlib>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
const int INF=2000000000;
vector<int> v;
void dfs(int cur,int sum,int now){
	if(cur==8){
		if(sum==10) v.push_back(now);
	}
	else{
		for(int i=0;i<=min(10-sum,9);i++) dfs(cur+1,sum+i,now*10+i);
	}
}
int main(){
	dfs(0,0,0);
	sort(v.begin(),v.end());
	int k;
	scanf("%d",&k);
	printf("%d\n",v[k-1]);
	return 0;
}