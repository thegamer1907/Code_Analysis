#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,i,d,d1,d2;
    long double f1;
    cin>>n>>l;
    long long int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    d1=2*A[0];
    d2=2*(l-A[n-1]);
    d=max(d1,d2);
    for(i=0;i<n-1;i++)
    {
        d=max(d,A[i+1]-A[i]);
    }
    f1=(d*1.00)/2;
    printf("%.9Lf",f1);
}