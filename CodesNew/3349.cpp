#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <cstdlib>
#include <algorithm>
#define ll long long
const int MAX=1e6;
using namespace std;
int a[100+5];
int main()
{
    int n,m,maxx=-1;
    ios::sync_with_stdio(false);
    cin>>n>>m;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>maxx)
            maxx=a[i];
        sum+=a[i];
    }
    int ans1,ans2;
    ans2=maxx+m;
    sum+=m;
    if(sum%n!=0)
       ans1=sum/n+1;
    else
        ans1=sum/n;
    ans1=max(ans1,maxx);
    cout<<ans1<<" "<<ans2;
    return 0;



}