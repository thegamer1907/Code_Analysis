#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n+5];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        int i=1+a[1];
        int c=0;
        while(i<=m)
        {
            if(i==m)
            {
                c=1;
                break;
            }
            i=i+a[i];
        }
        if(c==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}