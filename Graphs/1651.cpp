#include<cstdio>
int a[100000];
int f=0;
int n,m;
void findway(int k)
{
	if(a[k]+k==m)
		f=1;
	if(k>=n)
		return;
	findway(k+a[k]);
}
int main()
{
	int i,temp;
	scanf("%d %d",&n,&m);
	for(i=1;i<n;i++)
		scanf("%d",&a[i]);
	findway(1);
	if(f==1)
		printf("YES");
	else
		printf("NO");
}
