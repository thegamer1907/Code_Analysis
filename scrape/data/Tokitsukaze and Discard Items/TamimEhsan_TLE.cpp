#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,k,i,K;
    cin>>n>>t>>k;
    long long ara[t];
    K=k;
    for(i=0;i<t;i++) scanf("%lld",&ara[i]);
        long long l=0,u=k,cnt=0,flag=0;
    for(i=0;i<t;i++){
        if(ara[i]>u and flag==0) u+=k,i--/*,cout<<1<<" "<<ara[i]<<endl*/;
        else if (ara[i]>u and flag!=0) u+=flag,flag=0,cnt++,i--/*,cout<<2<<" "<<ara[i]<<endl*/;
        else flag++;
    }
    if (flag!=0) cnt++;
    cout<<cnt;
}
/*
10 1 5
10
*/