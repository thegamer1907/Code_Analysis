#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<int>a(n);

    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1)
    {
      cout<<m+a[0]<<" "<<m+a[0];return 0;
    }
    sort(a.begin(),a.end());
    int k=m+a[n-1];
    vector<int> u(a.begin(),a.end());
    while(m--)
    {
      sort(u.begin(),u.end());
      u[0]++;

    }
    sort(u.begin(),u.end());
    cout<<u[n-1]<<" "<<k;
    return 0;
}