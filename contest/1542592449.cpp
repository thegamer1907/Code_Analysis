#include<stdio.h>
#include<string.h>
#include<string>
#include<math.h>
#include<iostream>
#include<bitset>
#include<map>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>
#include<limits.h>
#include<stdlib.h>
#include<time.h>
#define ll long long
#define mod 1000000009
#define N 1000005
#define mp make_pair
#define pa pair<ll,int>
#define For(i,x,y) for(int i=x;i<=y;i++)
#define Rep(i,x,y) for(int i=x;i>=y;i--)
using namespace std;
inline int read(){int x=0,f=0;char ch=getchar();for(;ch<'0'||ch>'9';ch=getchar()) if(ch=='-') f=1;for(;ch>='0'&&ch<='9';ch=getchar()) x=(x<<1)+(x<<3)+ch-48;return f?-x:x;}
inline void write(ll x){if(x<10) putchar(x+48);else write(x/10),putchar(x%10+48);}
inline void writeln(ll x){if(x<0) x=-x,putchar('-');write(x);putchar('\n');}
char s[3],s1[105][3];
bool flag=0;
int main(){
	scanf("%s",s+1);
	int n=read();
	For(i,1,n) scanf("%s",s1[i]+1);
	For(i,1,n) if(s1[i][1]==s[1]&&s1[i][2]==s[2]||s1[i][1]==s[2]&&s1[i][2]==s[1]) flag=1;
	For(i,1,n) For(j,1,n) if(i!=j){
		if(s1[i][2]==s[1]&&s1[j][1]==s[2]) flag=1;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}