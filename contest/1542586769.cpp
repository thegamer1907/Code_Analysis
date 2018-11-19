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
int n,k,f[100005][5],a[16];
int main(){
	n=read();k=read();
	For(i,1,n) For(j,1,k) f[i][j]=read();
	For(i,1,n){
		int w=0;
		For(j,1,k) w=(w<<1)|f[i][j];
		a[w]=1;
	}
	For(i,0,15) For(j,0,15) if((a[i]&a[j])&&((i&j)==0)){puts("YES");return 0;}
	puts("NO");
	return 0;
}