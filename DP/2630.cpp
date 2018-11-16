#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define rt register int
#define l putchar('\n')
#define ll long long
#define r read()
#define p 998244353
using namespace std;
inline ll read()
{
    register ll x = 0; char zf = 1; char ch;
	while (ch != '-' && !isdigit(ch)) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
	while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}
void write(ll y){if(y<0)putchar('-'),y=-y;if(y>9)write(y/10);putchar(y%10+48);}
void writeln(const ll y){write(y);putchar('\n');}
int i,j,k,m,n,x,y,z,cnt;
int main()
{
    n=r;m=r;
    while(n>=1&&m>=1)
    {
    	if(n==1&&m==1)break;
    	if(n<m)swap(n,m);
    	m++;n-=2;cnt++;
	}cout<<cnt;
	return 0;
}




