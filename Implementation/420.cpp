#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{int n,k,a,s=0;
cin>>n>>k;
int t[n+1];
for(int i=1;i<=n;i++)
{
    cin>>t[i];
}
a=t[k];
for(int i=1;i<=n;i++)
{
    if(t[i]>=a && t[i]>0)
        s++;
}

    cout<<s;

    return 0;
}