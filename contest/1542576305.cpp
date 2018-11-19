#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12) h=0;
	if(t1==12) t1=0;
	if(t2==12) t2=0;
	h=h*60*60+m*60+s;
	m=m*(12*60*60)/60+s*(12*60*60)/3600;
	s=s*(12*60*60)/60;
    t1=t1*60*60;
    t2=t2*60*60;
    int flag=0,sum=0;
    for(int i=t1+1;i%(12*60*60)!=t2;i++)
    {
    	int j=i%(12*60*60);
    	if(j==h||j==m||j==s)
    	sum++;
	}
	if(sum==0) flag=1;
	sum=0;
	for(int i=t2+1;i%(12*60*60)!=t1;i++)
    {
    	int j=i%(12*60*60);
    	if(j==h||j==m||j==s)
    	sum++;
	}
	if(sum==0) flag=1;
	if(flag)
	puts("YES");
	else puts("NO");
	return 0;
}
