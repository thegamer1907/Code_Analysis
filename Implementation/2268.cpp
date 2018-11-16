#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,n,k,w,sum,av;
    cin>>k>>n>>w;
    av=(w*(w+1))/2;
    av=av*k;
    if(av>n)
    {
        sum=av-n;
        cout<<sum<<endl;
    }
    else
        cout<<0<<endl;
    return 0;
}