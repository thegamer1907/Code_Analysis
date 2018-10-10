#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i;
    cin>>n>>l;
    vector<double> v(n);
    for(i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    double r=0;
    r=max(r,2*v[0]);
    r=max(r,2*(l-v[n-1]));
    for(i=0;i<n-1;i++)
    r=max(r,v[i+1]-v[i]);
    printf("%.15lf",r/2);
}