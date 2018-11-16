#include<bits/stdc++.h>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,m,result=0;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++) cin>>a[i];
     cin>>m;
    int b[m+1];
    for(i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    //for(i=0;i<n;i++) cout<<a[i]<<" ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                result++;
                b[j]=-1000;
                break;
            }
        }
    }
    cout<<result;
    return 0;
}
