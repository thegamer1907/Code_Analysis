#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,m,a[100002],b[100002],i=0,j=0;
    cin >> n;
    for(i=0;i<n;i++)
    cin >> a[i];
    cin >> m;
    for(i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    i=0;j=0;
    ll ans=0;
    while(i<n&&j<m)
    {
        if(abs(a[i]-b[j])<=1)
        {
            i++;
            j++;
            ans++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else if(b[j]>a[i])
        {
            i++;
        }
    }
    cout << ans << endl;
}