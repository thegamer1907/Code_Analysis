//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int b[n];
    for(int i=0;i<n;++i)
        cin>>b[i];
    cin>>m;
    int g[m];
    for(int i=0;i<m;++i)
        cin>>g[i];
    int gg[102]={0};
    for(int i=0;i<m;++i)
        ++gg[g[i]];
    int c=0;
    sort(b,b+n);
    for(int i=0;i<n;++i)
    {
        if(b[i]>1 && gg[b[i]-1])
        {
            ++c;
            gg[b[i]-1]--;
        }
        else if(gg[b[i]])
        {
            ++c;
            gg[b[i]]--;
        }
        else if(b[i]<101 && gg[b[i]+1])
        {
            ++c;
            gg[b[i]+1]--;
        }
    }
    cout<<c;
}