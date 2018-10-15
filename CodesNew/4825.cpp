#include<bits/stdc++.h>
using namespace std;
int n,c=0;
int a[1000009];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0,j=n/2; j<n&&i<n/2; j++)
    {
        if(a[j]>=2*a[i])
        {
            c++;
            i++;
        }
    }
    cout<<n-c;
}
