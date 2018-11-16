#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[104];
int b[104];
int main()
{int n,m,cont=0;
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
cin>>m;
for(int i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
      if(abs(a[i]-b[j])==1 || abs(a[i]-b[j])==0)
      {
        b[j]=200;
        cont++;
        break;
      }
    }
cout<<cont;

    return 0;
}
