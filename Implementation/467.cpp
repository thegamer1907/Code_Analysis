#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int r=0;
    int x;
    int a[100];
    cin>>n>>k;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        if(i == k)
            x = a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=x && a[i]>0)
            r++;
        else
            break;
    }
    cout<<r;
    return 0;
}