#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[100000];
    cin>>n>>t;
    for(int i=1;i<n;i++)cin>>a[i];
    int j=1;
    while(j<t)
    {
        j=j+a[j];
    }
    if(j==t)cout<<"YES";
    else cout<<"NO";
}