/******************************************
*    AUTHOR:         CHIRAG AGARWAL       *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

bool check(double a,int b,int c)
{
	if(a>=b&&a<=c)
	{
		return true;
	}
	return false;
}


int main() 
{
	int h,m,s,t1,t2;
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	double pos1,pos2,pos3;
	h%=12;
	pos1=h+((m+(s*1.0/60))/60.0);
	pos2=(m+(s*1.0/60))/5.0;
	pos3=(s*1.0)/5.0;
	if(t1>t2)
	{
		swap(t1,t2);
	}
	if(!check(pos1,t1,t2)&&!check(pos2,t1,t2)&&!check(pos3,t1,t2))
	{
		printf("YES\n");
		return 0;
	}
	if(!check(pos1,0,t1)&&!check(pos1,t2,12)&&!check(pos2,0,t1)&&!check(pos2,t2,12)&&!check(pos3,t2,12)&&!check(pos3,0,t1)&&check)
	{
		printf("YES\n");
		return 0;
	}	
	printf("NO\n");
	return 0;
}