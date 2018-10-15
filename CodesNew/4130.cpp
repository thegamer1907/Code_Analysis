#include<bits/stdc++.h>
using namespace std;
#define N 1000005
#define LL long long
int a[N];
LL b[N];
LL s[N];
int main(){
    LL n,m;
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);
    for(int i=0;i<m;i++)scanf("%lld",&b[i]);
    s[0]=a[0];
    for(int i=1;i<n;i++)s[i]=s[i-1]+a[i];
    LL t=0;
    LL u=0;
    for(int i=0;i<m;i++){
        u+=b[i];
        LL x=upper_bound(s,s+n,u)-s;
        if(x==n)x=0,u=0;
        printf("%lld\n",n-x);
    }
}
