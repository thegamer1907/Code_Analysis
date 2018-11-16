#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,d=0,b=0,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
         d++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b=1;
            for(j=i+1;j<n;j++)
            {
               if(a[j]==0)
                b++;
                if(a[j]==1)
                 b--;
               if(b>c)
                c=b;
            }
            if(b>c)
             c=b;
        }
    }
    if(d==n)
     cout<<d-1;
     else
    cout<<d+c;
    return 0;
}
