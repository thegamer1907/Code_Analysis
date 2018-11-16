#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,w,s=0,i;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
        s=s+i*k;
    if(s>n)
    {
        cout<<s-n;
    }
    else
        cout<<0;
}