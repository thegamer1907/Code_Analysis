#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    if(t>n)
    {
        cout<<"NO";
    }
    for(int i=0;i<=n-1;)
    {
        if(i==t-1)
        {
            cout<<"YES";
            return 0;
        }
        i = i+a[i];
    }
    cout<<"NO";
    return 0;
}
