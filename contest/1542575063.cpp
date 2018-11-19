#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
typedef long long ll;
#define maxn 100010
#define mod 1000000007
using namespace std;
int h,m,s,t1,t2;
int main ()
{
	int i;
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	if(t1>t2)
	{
		int t;
		t=t1;
		t1=t2;
		t2=t;
	}
	int cnt=0;
	h*=5;
	t1*=5;
	t2*=5;
	for(i=t1;i<t2;i++)
	{
		if(h==i)
			cnt++;
		if(m==i)
			cnt++;
		if(s==i)
			cnt++;
	}
	if(cnt==3||cnt==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}