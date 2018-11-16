#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],g=0,f;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
               f=0;
            for(int k=i;k<j+1;k++)
            {
                a[k]=1-a[k];
            }
            for(int k=0;k<n;k++)
            {
                if(a[k]==1)
                    f+=1;
            }
            if(f>g)
                g=f;
            for(int k=i;k<j+1;k++)
                a[k]=1-a[k];
        }
    }
    if(g>=1)
    cout<<g;
    else if(a[0]!=1)
        cout<<"1";
        else
            cout<<"0";
    return 0;
}
