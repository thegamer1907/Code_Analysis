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

const int N = 1e5 + 500;
int n ,k;
int a[5][N];

int main()
{
	read(n);read(k);
	
	rep(i,1,n)
		rep(j,1,k)
			read(a[j][i]);
	
	
	rep(i,1,k) {
		bool e = 0;
		rep(j,1,n)
			if(!a[i][j]) e = 1;
		if(!e) return puts("NO");
	}
		
	if(k == 1)
	{
		rep(i,1,n)
			if( a[1][i] == 0 )return puts("YES");
		return puts("NO");
	}
	if(k == 2)
	{
		bool e = 0,k = 0;
		rep(i,1,n)
			if(a[1][i] == 0 || a[2][i] == 0)
				return puts("YES"); 
		return puts("NO");
	}
	if(k == 3)
	{
		rep(i,1,n)
			if(a[1][i] == 0 && a[2][i] == 0)
				return puts("YES");
			else if(a[2][i] == 0 && a[3][i] == 0)
				return puts("YES");
			else if(a[1][i] == 0 && a[3][i] == 0)
				return puts("YES");	
		return puts("NO");
	}
	if(k == 4)
	{
		rep(i,1,n)
			if(a[1][i] == 0 &&  a[2][i] == 0 && a[3][i] == 0)
				return puts("YES");
			else if(a[1][i] == 0 && a[2][i] == 0 && a[4][i] == 0)
				return puts("YES");
			else if(a[1][i] == 0 && a[3][i] == 0 && a[4][i] == 0)
				return puts("YES");
			else if(a[2][i] == 0 && a[3][i] == 0 && a[4][i] == 0)
				return puts("YES");
		bool p[10] = {0};
		
		rep(i,1,n)
			if(a[1][i] == 0 && a[2][i] == 0)
				p[1] = 1;
			else if(a[1][i] == 0 && a[3][i] == 0)
				p[2] = 1;
			else if(a[1][i] == 0 && a[4][i] == 0)
				p[3] = 1;
			else if(a[2][i] == 0 && a[3][i] == 0)
				p[4] = 1;
			else if(a[2][i] == 0 && a[4][i] == 0)
				p[5] = 1;
			else if(a[3][i] == 0 && a[4][i] == 0)
				p[6] = 1;
				
		if(p[1] && p[6]) return puts("YES");
		if(p[2] && p[5]) return puts("YES");
		if(p[3] && p[4]) return puts("YES");
		
		return puts("NO");
	}
	return 0;
}
