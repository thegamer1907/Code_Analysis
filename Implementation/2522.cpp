#include<cstdio>
int main(){
	int n,m,ans=0,x;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){

		scanf("%d",&x);
		if(x>m)ans+=2;
		else ans+=1;
	}
	printf("%d\n",ans);
}