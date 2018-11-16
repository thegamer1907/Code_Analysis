#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100],b[100],k=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    for(int i=0; i<n; i++)
    {
        for(int  j=0; j<m; j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                k++;
                b[j]=100000;
                break;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
