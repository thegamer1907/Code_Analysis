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
int h,m,s,t1,t2,a[4];
int main(){
	h=read();m=read();s=read();t1=read();t2=read();
	m/=5;s/=5;
	a[1]=h;a[2]=m;a[3]=s;
	sort(a+1,a+4);
	For(i,1,2) if(a[i]<t1&&t1<=a[i+1]&&a[i]<t2&&t2<=a[i+1]){puts("YES");return 0;}
	if((a[3]<t2||t2<=a[1])&&(a[3]<t1||t1<=a[1])){puts("YES");return 0;}
	puts("NO");
	return 0;
}