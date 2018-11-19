#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,po=0,n,t=0;
    string s;

    cin>>s>>n;
    string b, a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        b="";
        b=a[i]+a[i];
        if(b.find(s)!=-1)
        {
            t=1;
            cout<<"YES\n";
            break;
        }
    }
    if(t==0)
    {
        for(i=0; i<n&&t==0; i++)
        {
            b="";
            for(j=0; j<n; j++)
            {
                if(i!=j)
                {
                    b="";
                    b=a[i]+a[j];
                    if(b.find(s)!=-1)
                    {
                        t=1;
                        cout<<"YES\n";
                        break;
                    }

                    b="";
                    b=a[j]+a[i];
                    if(b.find(s)!=-1)
                    {
                        t=1;
                        cout<<"YES\n";
                        break;
                    }
                }
            }
        }
        if(t==0)cout<<"NO\n";
    }
    return 0;
}
