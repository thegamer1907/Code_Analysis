#include<bits/stdc++.h>
using namespace std;
long long  tot;
long long  n;
bool init(long long  a,long long  m)
{
    tot=0;
    while(m>0)
    {
        if(m>a)
        {
            m-=a;
            tot+=a;
            m=m-(m/10);
        }
        else
        {
            tot+=m;
            m=0;
        }

    }
    if(tot>=(n/2+n%2))
        return 1;
    return 0;
}
int main()
{
    long long  l,r;
    long long  mid,sum,x,y;
    while(cin>>n)
    {
        l=1;
        r=n;
        //   mid=(l+r)/2;
        sum=n;
        while(r>=l)
        {
            mid=(l+r)/2;
            if(init(mid,n))
            {
                sum=min(sum,mid);
                r=mid-1;
            }
            else
                l=mid+1;
        }
        cout<<sum<<endl;
    }
}

