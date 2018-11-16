#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int n,i,t,a[30100];
    bool flag=false;
    cin>>n>>t;
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
    i=1;
    while(i<=n-1)
    {
        i=i+a[i];
        if(i==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
