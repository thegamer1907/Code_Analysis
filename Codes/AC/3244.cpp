#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp=0x3f3f3f3f,ans;
	for(int i=1;i<=n;++i){
		int x;
		scanf("%d",&x);
		if(((x+n-i)/n+1)<temp)
			temp=(x+n-i)/n+1,ans=i;
	}
	printf("%d",ans);
	return 0;
}