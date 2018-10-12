#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string p[n],e[m];
    if(n>m)
        cout<<"YES";
    if(n<m)
        cout<<"NO";
    if(n==m)
    {
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=0;i<n;i++)
            cin>>e[i];
        int t=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(p[i]==e[j])
                {
                    t++;
                    break;
                }
            }
        }
        if(t%2!=0)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
