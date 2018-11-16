#include<cstdio>
int a[30005];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<n;i++)
	   scanf("%d",&a[i]);
	int t=1;
	while(t<m)
	{
		t+=a[t];
	}
	if(t==m)
	   printf("YES\n");
	else printf("NO\n");
	return 0;
}
