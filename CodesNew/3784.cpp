#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    int ansa;
    cin>>n>>m;
    int maxx=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        maxx=max(maxx,a[i]);
    }
    sum=maxx*n-sum;
    if(sum>=m)
    {
        ansa=0;
    }
    else
    {
        if((m-sum)%n==0)
        {
            ansa=(m-sum)/n;
        }
        else ansa=(m-sum)/n+1;
    }
    cout<<maxx+ansa<<" "<<maxx+m<<endl;
    return 0;
}
