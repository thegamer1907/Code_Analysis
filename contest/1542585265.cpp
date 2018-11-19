#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath> 
#include <vector>
#define N 100005
using namespace std; 

int h,m,s,t1,t2,s1,s2;
bool f[N];

int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1>t2) swap(t1,t2);
	if(h>=t1&&h<t2) s1++;else s2++;
	if(m>=t1*5&&m<t2*5) s1++;else s2++;
	if(s>=t1*5&&s<t2*5) s1++;else s2++;
	if(!s1||!s2) printf("YES");
	else printf("NO");
	return 0;
} 
