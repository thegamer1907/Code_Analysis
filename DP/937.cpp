#include<algorithm>
#include<iostream>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int a[200];
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]) sum++;
    }
    if(sum==n)
    {
        cout<<sum-1;
        return 0;
    }
    int ans = sum;
    for(int i=1;i<=n;i++)
    {
        int num = sum;
        for(int j=i;j<=n;j++)
        {
            if(a[j]) num--;
            else num++;
            ans = max(ans,num);
        }
    }
    cout<<ans;
}

