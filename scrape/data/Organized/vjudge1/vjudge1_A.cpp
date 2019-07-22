#include<bits/stdc++.h>
using namespace std;
 
long long read(){
    long long x=0,f=1;char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9')x=(x<<3)+(x<<1)+(c^48),c=getchar();
    return x*f;
}
 
#define MAXM 100000
long long N,M,K;
long long P[MAXM+5];
 
int main(){
    N=read(),M=read(),K=read();
    for(int i=1;i<=M;i++)
        P[i]=read();
    long long Ans=0,Cut=0;
    for(int i=1;i<=M;i++){
        long long End=(P[i]-Cut)+(K-((P[i]-Cut-1)%K+1));
        while(i<M&&P[i+1]-Cut<=End)
            i++;
        Ans++;
        Cut=i;
    }
    printf("%lld",Ans);
    return 0;
}