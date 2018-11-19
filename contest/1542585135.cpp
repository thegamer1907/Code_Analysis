#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<iostream>
#include<algorithm>
#include<string>
#define rep(i,x,y) for(register int i = x;i <= y;++i)
#define repd(i,x,y) for(register int i = x;i >= y;--i)
using namespace std;
typedef long long ll;
template<typename T>void read(T&x)
{
	x = 0;char c;int sign = 1;
	do { c = getchar();if(c == '-') sign = -1; }while(c < '0' || c > '9');
	do { x = x * 10 + c - '0'; c = getchar();	}while(c <= '9' && c >= '0');
	x *= sign;
}

double a[4],t1,t2;

int main()
{
	scanf("%lf%lf%lf%lf%lf",&a[1],&a[2],&a[3],&t1,&t2);
	if(a[1] == 12) a[1] = 0;
	if(t1 == 12 ) t1 = 0;
	if(t2 == 12 ) t2 = 0;
	t1 *= 5;t2 *= 5;
	
	a[2] += a[3]/60;
	
	a[1] *= 5; a[1] += a[2]/12;
	
	sort(a+1,a+4);
	
	if(t1 < a[2] && t1 > a[1])
	{
		if(t2 < a[2] && t2 > a[1])
			return puts("YES") ;
		return puts("NO");
	}
	if(t1 < a[3] && t1 > a[2])
	{
		if(t2 <= a[3] && t2 >= a[2])
			return puts("YES") ;
		return puts("NO");
	}
	
	if( (t2 <= a[2] && t2 >= a[1]) || (t2 <= a[3] && t2 >= a[2]) )
		return puts("NO");
	return puts("YES");
	
	return 0;
}
