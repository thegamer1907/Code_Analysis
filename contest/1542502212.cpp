#include<ctime>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define rt register int
#define l putchar('\n')
#define ll long long
#define r read()
using namespace std;
inline ll read(){
    ll x = 0; char zf = 1; char ch = getchar();
    while (ch != '-' && !isdigit(ch)) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}
void write(ll y){if(y<0)putchar('-'),y=-y;if(y>9)write(y/10);putchar(y%10+48);}
void writeln(const ll y){write(y);putchar('\n');}
int i,j,k,m,n,x,y,z,cnt;
bool b[23333];
int main(){
	n=r;m=r;
	for(rt i=1;i<=n;i++){
		x=0;
		for(rt j=0;j<m;j++)
		x|=(1<<j)*r;
		b[x]=1;
	}
	for(rt i=0;i<(1<<m);i++)
	for(rt j=0;j<(1<<m);j++)
	if(b[i]&&b[j]&&((i&j)==0)){
		puts("YES");return 0;
	}puts("NO");
	return 0;
}
