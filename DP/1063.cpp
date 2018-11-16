#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c1=0,c0=0,max0=-1,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            c1++;
            if(c0>0)
            {
                c0--;
            }
        }
        if(a==0)
        {
            c0++;
            if(c0>max0)
                max0=c0;
        }
    }
    ans=c1+max0;
    cout<<ans<<endl;
    return 0;
}