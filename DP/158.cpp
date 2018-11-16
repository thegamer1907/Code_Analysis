#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,s=0;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort (a,a+m);
    sort (b,b+n);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        if(fabs(a[i]-b[j])<=1)
        {
            a[i]=b[j]=-2;
            s++;
        }
        cout<<s;
    return 0;
}
 