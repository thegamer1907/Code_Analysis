#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int pairs=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        if(abs(b[j]-a[i])<=1)
        {
            b[j]=1000;
            pairs+=1;
            break;
        }
    }
    cout<<pairs;
    return 0;
}