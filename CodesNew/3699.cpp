#include <bits/stdc++.h>
using namespace std;

int main() {
     int n,m,s=0;
     cin>>n>>m;
     int a[n];
     for(int i=0;i<n;i++)
     {
           cin>>a[i];
           s=max(s,a[i]);
     }
     sort(a,a+n);
     for(int i=0;i<m;i++)
     {
           a[0]++;
           sort(a,a+n);
     }
     cout<<a[n-1]<<" "<<s+m;
    
	return 0;
}