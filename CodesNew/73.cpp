#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    long long int l;
    float max1;
    cin>>n>>l;
    long long int a[n];
    for(i=0; i<n; i++)
    cin>>a[i];
    sort(a,a+n);
    max1=2*max(a[0],l-a[n-1]);
    for(i=0; i<n-1; i++)
    {
       if(a[i+1]-a[i]>max1)
       max1=a[i+1]-a[i];
    }
    cout<<setprecision(9)<<max1/2;
}