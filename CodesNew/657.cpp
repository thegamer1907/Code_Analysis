#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,m1=0;
    cin>>n>>m;
    string s1[10000];
    string s2[10000];
    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>s2[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s1[i]==s2[j])
            {
                m1++;
                break;
            }
        }
    }
    if(m1==0)
    {
        if(n>m)
        {
            cout<<"YES\n";
            return 0;
        }
        else
        {
            cout<<"NO\n";
            return 0;
        }
    }
    n=n-m1;
    m=m-m1;
    if(m1%2==0){
    if(n>m)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    }
    else if(m1%2!=0)
    {
        if(m>n)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
