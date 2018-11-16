#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w,i,sum=0,ans;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum+=(k*i);
    }
    if(sum>n)
        printf("%lld\n",sum-n);
    else
    printf("0\n");

}
