#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,p=0,j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(b[j]!=0)
            {
                if((b[j]==a[i]+1)||(b[j]==a[i]-1)||(b[j]==a[i]))
                {
                    p++;
                    b[j]=0;
                    break;
                }
            }
        }
    }
    cout<<p;

}

