#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,m,s,t1,t2,a[3],count=2,flag=0,i;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h=h%12;
	t1=t1%12;
	t2=t2%12;
	h=h*10;
	m=m*2;
	s=s*2;
	t1=t1*10;
	t2=t2*10;
	if(m>0 || s>0)
	{
		h=(2*h+10)/2;
	}
	if(s>0)
		m+=1;
	a[0]=h; a[1]=m; a[2]=s;
	sort(a,a+3);
	for(i=0;i<2;i++)
	{
		if((t1>a[i] && t1<a[i+1]) && (t2>a[i] && t2<a[i+1]))
		{
			flag=1;
			count-=2;
			break;
		}
		else if((t1>a[i] && t1<a[i+1]) || (t2>a[i] && t2<a[i+1]))
		{
			count-=1;
			break;
		}
	}
	if(flag==1)
		printf("YES\n");
	else
	{
		if(count==2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}