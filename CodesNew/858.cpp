#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,m,i;
    string temp;
    cin>>n>>m;

    map<string,int> mp;

    for(i=0;i<n;i++)
    {
        cin>>temp;
        mp[temp]++;
    }
    int same = 0;
    for(i=0;i<m;i++)
    {
        cin>>temp;
        if(mp[temp]!=0)
        {
            same++;
        }
    }

    if(m==n)
    {
        if(same%2==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    else if(n>m)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}
