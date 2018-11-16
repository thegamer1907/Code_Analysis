#include<cstdio>
int n,t,now=1,a[30005];
int main() {
    scanf("%d%d",&n,&t);
    for(int i=1;i<n;++i) scanf("%d",a+i),a[i]+=i;
    while(1) {
    	now=a[now];
    	if(now==t) return puts("YES"),0;
    	if(now>t) return puts("NO"),0;
	}
    return 0;
}