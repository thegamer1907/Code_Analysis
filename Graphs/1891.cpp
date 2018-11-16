#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m+2];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    i=0,j=0;
    int cnt=0;
    while(i<n&&j<m)
    {
        if(abs(a[i]-b[j])<=1)
        {
            i++;
            j++;
            cnt++;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
    cout<<cnt<<endl;
    return 0;
    }
