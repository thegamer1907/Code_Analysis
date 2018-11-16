#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,pos,f;
    cin>>n>>t;
    int a[n+1],b[n+1];
    for(int i=1; i <= n-1; i ++)
    {
        cin>>a[i];
    }
    for(int i =1; i <= n-1; i+=a[i])
    {
        f = i+a[i];
        if(f     == t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
