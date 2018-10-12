#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,i,num,pos,ans=1e18;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>num;
        num=num-(i-1);

        t=i-1;
        if(num<=0)
        {
            if(t<ans)
            {
                pos=i;
                ans=t;
            }
        }
        else
        {

            t+=n*(num/n);
            if(num%n!=0)
                t+=n;

            if(t<ans)
            {
                pos=i;
                ans=t;
            }
        }
    }
    cout<<pos;
}
