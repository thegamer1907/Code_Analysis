#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	t1=t1*5%60,t2=t2*5%60,h=h*5%60;
	if(t1>t2)swap(t1,t2);
	int s1=0,s2=0;
	if(h>=t1&&h<t2)s1++;else s2++;
	if(m>=t1&&m<t2)s1++;else s2++;
	if(s>=t1&&s<t2)s1++;else s2++;
	if(!s1||!s2)printf("YES");
	else printf("NO");
	return 0;
}