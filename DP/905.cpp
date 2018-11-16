#include <bits/stdc++.h>
using namespace std;
int n,a[100],maxx=0,g=0,x;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) g++;
    }
    if(g==n)
    {
        cout<<n-1;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            x=0;
            for(int k=i;k<=j;k++)
            {
                if(a[k]==0) x++;
                else x--;
            }
            if(x>maxx) maxx=x;
        }
    }
    cout<<g+maxx;
}
