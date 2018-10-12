#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m,r=0;
    string p[1003],e[1003];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>e[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(p[i]==e[j])
            {
                r++;
                break;
            }
        }
    }
    //cout<<r;
    if(r==0)
    {
        if(n>m)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    n=n-r;
    m=m-r;
    if(r%2==0)
    {
        if(n>m)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    else
    {
        if(m>n)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            cout<<"YES";
            return 0;
        }
    }
    return 0;
}
