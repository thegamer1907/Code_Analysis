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
char c[105][1005],s[1005];bool b[1005];
int main(){
	scanf("%s",s+1);int len=strlen(s+1);
	n=r;
	for(rt i=1;i<=n;i++)scanf("%s",c[i]+1);
	b[0]=1;
	for(rt i=1;i<=n;i++)if(c[i][2]==s[1])b[1]=1;
	for(rt i=2;i<=len;i++)
	for(rt j=1;j<=n;j++)
	if(s[i]==c[j][2]&&s[i-1]==c[j][1])b[i]|=b[i-2];
	for(rt i=1;i<=n;i++)if(c[i][1]==s[len])b[len]|=b[len-1];
	if(b[len])puts("YES");else puts("NO");
	return 0;
}
