//in the name of Allah
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int x2=0;
    int x1=0;
    int x3=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if (a[i]==4)
        {
            ans++;
        }
        if (a[i]==2)
        {
            x2++;
        }
        if(a[i]==3)
        {
            x3++;
        }
        if(a[i]==1)
        {
            x1++;
        }
    }
    ans+=x2/2;
    x2=x2%2;
    if(x1<=x3)
    {
        ans=ans+x3+x2;
        cout<<ans;
        return 0;
    }
    else
    {
        ans+=x3;
        x1=x1-x3;
        if(x2==1)
        {
            if(x1>=2)
            {
                ans++;
                x1-=2;
                x2=0;
            }
            else
            {
                ans++;
                x1=0;
                x2=0;
            }
        }
        if(x1%4==0)
        {
            ans+=x1/4;
        }
        else
        {
            ans+=(x1/4)+1;
        }
        cout<<ans;

    return 0;
    }
}
