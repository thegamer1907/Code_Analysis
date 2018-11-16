#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,j,n,m,c,ans=0;
    vector<int> b,g;
    cin>>n;
    b.resize(n+1);
    for (i=1; i<=n; i++)
        cin>>b[i];
    cin>>m;
    g.resize(m+1);
    for (j=1; j<=m; j++)
        cin>>g[j];
    
    for(i=1; i<n; i++)
    for(j=i+1; j<=n; j++)
       if (b[i]>b[j])
       {
            c=b[i];
            b[i]=b[j];
            b[j]=c;
       }
                
    for(i=1; i<m; i++)
    for(j=i+1; j<=m; j++)
       if (g[i]>g[j])
       {
            c=g[i];
            g[i]=g[j];
            g[j]=c;
       }          
       
     for(i=1; i<=n; i++)
    { c=0;
             for (j=1; j<=m; j++)
                 if (g[j]!=0 && b[i]==g[j] || 
                     g[j]!=0 && abs(b[i]-g[j])==1)
                 {
                   g[j]=0;
                   ans++; c=1;
                   break;
                 }
             
    }      
     cout<<ans;
    
    return 0;
} 