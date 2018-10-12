#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k = sizeof(a)/sizeof(a[0]); 
  
    sort(a, a+k);
    int ans=a[n-1]+m;
    int s=a[n-1];
    for(int i=0;i<n;i++)
    {
        while(a[i]<s&&m>0)
        {
            a[i]++;
            m--;
        }
        if(m==0)
        break;
    }

    if(m==0)
    cout<<a[n-1]<<" ";
    else if(m%n!=0)
    cout<<(m/n+1)+a[n-1]<<" ";
    else
    cout<<m/n+a[n-1]<<" ";
    cout<<ans;
}
