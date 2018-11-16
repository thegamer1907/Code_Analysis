#include <bits/stdc++.h>

using namespace std;

int n,t,i;

int a[30001],v[30001];

int main()
{
    cin>>n>>t;
    for(i=1;i<n;i++)
        cin>>a[i];
    v[1]=1;
    for(i=1;i<t;i++)
        if(v[i])
            v[i+a[i]]=1;
    if(v[i])cout<<"YES";
    else cout<<"NO";
    return 0;
}
