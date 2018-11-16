#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=0,a[200],b[200];
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }sort(a,a+n);
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }sort(b,b+m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             if(abs(a[i]-b[j])<=1)
             {
                 b[j]=2000;
                 a[i]=2000;
                 x++;
             }
        }
    }
    cout << x << endl;
    return 0;
}