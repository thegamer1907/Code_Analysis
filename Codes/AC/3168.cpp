#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=i)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    int mmin=2e9;
    for(int i=0;i<n;i++)
    {
        mmin=min(mmin,a[i]/n);
    }
    for(int i=0;i<n;i++)
    {
        a[i]-=mmin*n;
        if(a[i]<=i)
        {
            cout<<i+1<<endl;
            return 0;
        }
        a[i]-=n;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=i)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}
