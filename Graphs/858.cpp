#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,a[100100],i,sum=0;
    cin>>n>>t;
    for(i=1;i<=n-1;i++)
        cin>>a[i];
    for(i=1;i<=n-1;)
    {
        i+=a[i];
        if(i==t)
        {
            cout<<"YES";
            return 0;
        }
        if(i>t)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"NO";
}
