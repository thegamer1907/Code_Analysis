#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,maximum1,d,maximum=0;
    cin>>n>>d;int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];

    }
    sort(A,A+n);for(i=1;i<n;i++)
   maximum=max(A[i]-A[i-1],maximum);
    maximum1=max(A[0]-0,d-A[n-1]);
    if(maximum*0.5>maximum1)
        cout<<fixed<<setprecision(9)<<maximum*0.5<<"\n";
    else
    cout<<fixed<<setprecision(9)<<maximum1*1.0<<"\n";
}
