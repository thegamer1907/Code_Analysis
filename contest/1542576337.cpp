#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<set>
#include<map>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
typedef int LL;
#define sqr(x) ((x)*(x))
#define mp make_pair
inline int read(){
	int x = 0; char ch = getchar(); bool positive = 1;
	for (; !isdigit(ch); ch = getchar())	if (ch == '-')	positive = 0;
	for (; isdigit(ch); ch = getchar())	x = x * 10 + ch - '0';
	return positive ? x : -x;
}
inline void write(int a){
    if(a>=10)write(a/10);
    putchar('0'+a%10);
}
inline void writeln(int a){
    if(a<0){
    	a=-a; putchar('-');
	}
	write(a); puts("");
}
const int N=100005;
long long zs,f[N][21],inf=100000000000000;
int n,k,tong[N],a[N],LLL=1,RRR=0;
inline void solve(int l,int r,int L,int R,int now){
    if(l>r||L>R)return;
    int mid=(l+r)>>1,pos; //if(mid>R)mid=R+1;
    long long value=inf;
    while(RRR<mid)zs+=tong[a[++RRR]]++; 
    while(RRR>mid)zs-=--tong[a[RRR--]]; 
    while(LLL>min(mid,R+1))zs+=tong[a[--LLL]]++;
    while(LLL<min(mid,R+1))zs-=--tong[a[LLL++]];
    for(int i=min(mid-1,R);i>=L;i--){
        if(zs+f[i][now-1]<value){value=zs+f[i][now-1];pos=i;}zs+=tong[a[--LLL]]++;
	}
    f[mid][now]=value;
    solve(l,mid-1,L,pos,now);solve(mid+1,r,pos,R,now);
}
int main(){
    n=read(); k=read();
    for(int i=1;i<=n;i++)a[i]=read(); long long ans=inf;
    for(int i=1;i<=n;i++)f[i][1]=f[i-1][1]+tong[a[i]]++; 
    for(int i=2;i<=k;i++){memset(tong,0,sizeof(tong)); LLL=1; zs=RRR=0; solve(i,n,0,n,i); ans=min(ans,f[n][i]);}
    cout<<ans<<endl;
}