#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    sort(a,a+n);
    int p=a[n-1]+m;
    for(int i=0;i<m;i++)
    {
        a[0]++;
        sort(a,a+n);
    }
    cout<<a[n-1]<<" "<<p;}
     
        
      