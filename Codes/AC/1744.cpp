#include<bits/stdc++.h>
using namespace std;

inline long long gett(long long n, long long m, long long x)
{
        long long i, s=0, p;

        for(i=1; i<=n; i++)
        {
                p=(x-1)/i;
                s+=min(p, m);
        }

        return s;

}

int main()
{

        long long hi=1e18, lo=0, mid, n, m, k, ans, p;

        cin>>n>>m>>k;

     //   hi=1e18;

        while(lo+1<hi)
        {
                mid= (hi+lo)>>1;

                p=gett(n, m, mid);

                if(p>=k)    hi=mid;

                else
                {
                    lo=mid;
                    ans=mid;
                }
        }

        cout<<ans<<endl;


}