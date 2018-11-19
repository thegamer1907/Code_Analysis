#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a[100005],sum=0,c=0,p=1,h,m,sec,f=0;
	int x1,x2;
	scanf("%d %d %d %d %d",&h,&m,&sec,&x1,&x2);
	float h1=h,m1=m,sec1=sec;
	float t1=(float)x1,t2=(float)x2;
	if(1)
	{
		h1=h+0.5;
	}
	//if(m!=0)
	{
		if(1)
		m/=5,m1=m+0.5;
		else
		m/=5,m1=m;
	}
	if(m1<1)
	m1+=12;
	{
		if(1)
		sec/=5,sec1=sec+0.5;
		else
		sec/=5,sec1=sec;
	}
	if(sec1<1)
	sec1+=12;
	//printf("%f t2==%f %f\n",t1,t2,sec1);
	float s=t1,en=t2;
	while(s!=en)
	{
		s++;
		if((m1<=s && m1>=s-1) || (h1<=s && h1>=s-1) || (sec1<=s && sec1>=s-1))
		{
			//printf("%f\n",s);
			f=1;
			break;
		}
		if(s==13)
		s=1;
	}
	if(f==0)
	{
		printf("YES");
		return 0;
	}
	s=t2,en=t1;
	f=0;
	while(s!=en)
	{
		s++;
		//printf("%f %f\n",s,en);
		
		if((m1<=s && m1>=s-1) || (h1<=s && h1>=s-1) || (sec1<=s && sec1>=s-1))
		{
			//printf("%f",s);
			f=1;
			break;
		}
		if(s==13)
		s=1;
	}
	if(f==0)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
}
