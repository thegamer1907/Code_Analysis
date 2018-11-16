#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<set>
#include<queue>
#include<map>
#include<vector>
#define ll long long
#define N 10000
#define ls (now<<1)
#define rs ((now<<1)|1)
#define RG register
using namespace std;

inline ll read(){
    RG ll x=0,o=1; RG char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') o=-1,ch=getchar();
    while(ch>='0'&&ch<='9') x=((x<<3)+(x<<1))+ch-'0',ch=getchar();
    return x*o;
}

int n,a[N],now,ans,ex,sum[N];

int main(){
	n=read(); for(RG int i=1;i<=n;++i) a[i]=read(),sum[i]=sum[i-1]+a[i];
	for(RG int i=1;i<=n;++i){
		int Max=-1e9,now=0;
		for(RG int j=i;j<=n;++j) a[j]?--now:++now,Max=max(Max,now+sum[n]);
		ans=max(Max,ans);
	}   cout<<ans;
}
