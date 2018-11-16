#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t,a,f=0,r=1;
    cin>>n>>t;
    for(int i=1; i<n; i++)
    {
        cin>>a;
        if(i==r)
        {
            r=a+i;
            if(r==t)f=1;
        }
    }
    if(f==1) cout<<"YES";
    else cout<<"NO";
}
