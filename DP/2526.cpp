#include<bits/stdc++.h>
using namespace std;
int n,ans;
int main(){
	scanf("%d", &n);
	int t=0,las=0,x;
	for (int i=1;i<=n;i++){
		scanf("%d",&x);
		if (las>=x) t=1;
		else t++;
		ans=max(ans,t);
		las=x;
	}
	printf("%d\n",ans);
	return 0;
}