#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        ll a[n+5];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=1+a[1];
        bool b=false;
        int i=2;
        while(sum<=m)
        {
            if(sum==m)
            {
                b=true;
                break;
            }
            sum=sum+a[sum];
        }
        if(b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
