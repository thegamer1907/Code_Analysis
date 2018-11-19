#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main() 
{
    long n,k,i,a[100005][4],j,s,f1,f2,g[4][4]={0};
    cin>>n>>k;
    vector < long > v[4];
    for(i=0;i<n;++i)
    {
        for(j=0;j<k;++j)
        {
            cin>>a[i][j];
            if(a[i][j])
            v[j].pb(i);
        }
        for(j=0;j<k;++j)
        for(s=j+1;s<k;++s)
        if(a[i][j]==0 && a[i][s]==0)
        g[j][s]=1;
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<k;++j)
        if(a[i][j]) break;
        if(j==k) {cout<<"YES";return 0;}
    }
    for(i=0;i<n;++i)
    {
        s=0;
        for(j=0;j<k;++j)
        s+=a[i][j];
        if(s==1)
        {
           for(j=0;j<k;++j)
           if(a[i][j]) break;
           if(v[j].size()!=n) {cout<<"YES";return 0;}
        }
    }
    for(i=0;i<n;++i)
    {
        s=0;
        f1=-1;
        f2=-1;
        for(j=0;j<k;++j)
        s+=a[i][j];
        if(s==2)
        {
           for(j=0;j<k;++j)
           if(a[i][j]) 
           if(f1==-1) f1=j;
           else f2=j;
           if(g[f1][f2]) {cout<<"YES";return 0;}
        }
    }
    cout<<"NO";    
    return 0;
}
