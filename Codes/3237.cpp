/*
CF996B World Cup
by.YXH_XianYu
   2018.7.3
 */
#include<algorithm>
#include<cstdio>
#define REG register
#define MXN 100005

int n,
	a[MXN],
	tag[MXN],
	min=1000000000;

int main(){
	//freopen("TEMPLATE.in","r",stdin);
	//freopen("TEMPLATE.out","w",stdout);

	scanf("%d",&n);
	for(REG int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(REG int i=1;i<=n;i++){
		tag[i]=a[i]/n;
		min=std::min(min,tag[i]);
	}
	REG int cnt=n*min+1,p=1;
	while(cnt<=a[p])
		cnt++,p=(p==n)?(1):(p+1);
	printf("%d\n",p);

	return 0;
}
