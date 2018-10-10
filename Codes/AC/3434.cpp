#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long l=1,r=n;
    long long k;
    long long x,t,z;
    while(l<r)
    {
        k=(l+r)/2;
        x=n,t=0;
        while(x>0)
        {
            z=min(k,x);
            t+=z;
            x=x-z-(x-z)/10;
        }
        if(t>=(n+1)/2)
            r=k;
        else l=k+1;
    }
    cout<<r<<endl;
    return 0;
}
