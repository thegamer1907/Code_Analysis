#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n,m,s,t1,t2,ans;
int jud1(int x)
{
	if(m+s>0)
		return (t1<=n && t2>=n+1);
	else
		return (n>=t1 && n<=t2);
}
int jud2(int x)
{
	if(s>0)
		return (t1<=m && t2>=m+1);
	else
		return (m>=t1 && m<=t2);
}
int jud3(int x)
{
	return (x>=t1 && x<=t2);
}
int main(void)
{
	int sum=0;
	scanf("%d%d%d%d%d",&n,&m,&s,&t1,&t2);
	if(m==0) m+=60;
	if(s==0) s+=60;
	if(t1>t2) swap(t1,t2);
	if(jud1(n)) sum++;
	t1*=5;t2*=5;
	if(jud2(m)) sum++;
	if(jud3(s)) sum++;
	//printf("%d\n",sum);
	if(sum==0 || sum==3)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}