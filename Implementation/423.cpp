#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,b=0;
    cin>>n; cin>>k;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>=a[n-k]&&a[i]>0)
        b++;
    }
    cout<<b;
}