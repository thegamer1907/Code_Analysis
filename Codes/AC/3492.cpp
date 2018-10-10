#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n)
    {
        if(n<10)
        {
            cout<<1<<endl;
            continue;
        }
        long long upper=1e18,lower=1;
        long long ans=0;
        while(upper>lower)
        {
            long long m=(upper+lower)/2;
            long long u=0,l=0,k=n;
            while(k>0)
            {
                u+=min(m,k);
                k-=min(m,k);
                l+=k/10;
                k-=k/10;
            }
            if(u>=l)
            {
                ans=m;
                upper=m;
            }
            else
            {
                lower=m+1;
            }
        }
        cout<<lower<<endl;
    }
}
