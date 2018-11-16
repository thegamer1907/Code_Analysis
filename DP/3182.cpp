#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<queue>
#include<algorithm>
#define ll long long
#define re register
#define file(a) freopen(a".in","r",stdin);freopen(a".out","w",stdout)
using namespace std;
inline int gi(){
    int sum=0,f=1;char ch=getchar();
    while(ch>'9' || ch<'0'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0' && ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
    return f*sum;
}
inline ll gl(){
    ll sum=0,f=1;char ch=getchar();
    while(ch>'9' || ch<'0'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0' && ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
    return f*sum;
}
int n,a[200010];
int main(){
    n=gi();
    for(re int i=1;i<=n;i++)a[i]=gi();
    int ans=1,Ans=1;
    for(re int i=n-1;i>=1;i--){
	if(a[i]*2>=a[i+1])ans++;
	else ans=1;
	Ans=max(Ans,ans);
    }
    printf("%d\n",Ans);
    return 0;
}