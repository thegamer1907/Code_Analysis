#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    char a[x];
    for (int i=1;i<=x;i++)
        cin>>a[i];
    for (int i=1;i<=y;i++)
    {
        for (int i=1;i<=x;i++)
            if (a[i]=='B' && a[i+1]=='G')
                {
                    int c=a[i];
                    a[i]=a[i+1];
                    a[i+1]=c;
                    i++;
                }
    }
    for (int i=1;i<=x;i++)
        cout<<a[i];
}
