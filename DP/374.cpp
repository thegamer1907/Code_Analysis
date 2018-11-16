#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[120],b[120],i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
                if(abs(a[i]-b[j])<=1)
                {
                    b[j]=-100;
                    c++;
                    break;
                }
    }
    cout<<c;
}