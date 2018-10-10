#include<bits/stdc++.h>
int a[1200],n,l;
double ans;
int main(){
	scanf("%d %d",&n,&l);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	std::sort(a+1,a+1+n);
	ans=std::max(a[1],l-a[n]);
	for(int i=1;i<=n;++i){
		ans=std::max(ans,1.0*(a[i]-a[i-1])/2);
	}
	printf("%.11lf\n",ans);
	return 0;
} 