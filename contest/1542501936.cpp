#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2,a,b;
double f[3];
bool check(int st,double mid,int ed)
{
	if(ed<st)ed+=12;if(mid<st)mid+=12;
	if(mid>=1.0*st && mid<=1.0*ed)return true;
	return false;
}
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	f[2]=s,f[1]=m+f[2]/60,f[0]=h%12+f[1]/60;
	f[1]/=5.0,f[2]/=5.0;
	for(int i=0;i<3;i++)
	  a|=check(t1,f[i],t2),
	  b|=check(t2,f[i],t1);
	return printf("%s\n",a&&b?"NO":"YES"),0;
}
