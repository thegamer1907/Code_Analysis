#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,k=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for (int i=0;i<m;i++)
        cin>>b[i];
    sort (a,a+n);
    sort (b,b+m);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (abs (a[i]-b[j])<=1)
                {
                    k++;
                    a[i]=b[j]=-5;
                }
        }
    }
    cout<<k<<endl;
    return 0;
}
