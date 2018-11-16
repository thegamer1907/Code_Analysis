#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    int n,m;
    int ct=0;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    cin>>m;
    int g[m];
    sort(b,b+n);

    for(int i=0;i<m;i++)
        cin>>g[i];
        sort(g,g+m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(abs(b[i]-g[j])<=1)
                {ct++;
                g[j]=9795;
                break;}
            }
        }cout<<ct<<endl;
return 0;
}
