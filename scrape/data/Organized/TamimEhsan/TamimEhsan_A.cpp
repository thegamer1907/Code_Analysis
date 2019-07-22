#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,k,i,K;
    cin>>n>>t>>k;
   // n=100000000000; k=1;t=1;
    long long ara[t];
    K=k;//ara[0]=99999999999;
   for(i=0;i<t;i++) scanf("%lld",&ara[i]);
        long long l=0,u=k,cnt=0,flag=0;
    for(i=0;i<t;i++){
        if(ara[i]>u and flag==0) {
            long long temp=(ara[i]-u)/k;
            if(temp*k!=ara[i]-u) u+=(temp+1)*k;
            else u+=(temp)*(k);

            i--;
        }
        else if (ara[i]>u and flag!=0) u+=flag,flag=0,cnt++,i--/*,cout<<2<<" "<<ara[i]<<endl*/;
        else flag++; //cout<<0;
    }
    if (flag!=0) cnt++;
    cout<<cnt;
}
/*
10 1 5
10
*/