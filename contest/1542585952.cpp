#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int hh[3];
int sssss1,ssss2;
int main ()
{
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	hh[0]=s*720;
	hh[1]=m*720+s*12;
	hh[2]=h*3600+m*60+s;
	t1*=3600,t2*=3600;
	if(t1>t2) swap(t1,t2);
	for(int i=0;i<=2;i++)
	{
		if(hh[i]>t1&&hh[i]<t2)
		{
			sssss1++;
		}
		else  ssss2++;
	}
	if(sssss1==0||ssss2==0)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}