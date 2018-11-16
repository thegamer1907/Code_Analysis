#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)    
    {
    cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    
    bool c[m] = {0};
    int cn=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1 && !c[j])
            {
                c[j]=1;
                cn++;
                break;
            }
        }
    }
    cout<<cn;
    return 0;
}