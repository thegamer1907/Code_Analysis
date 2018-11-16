#include <iostream>
using namespace std;
int ans,kolfix,kol=0,n,a[100];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) {cin>>a[i]; if(a[i]==1) kol++;}
    ans=0; kolfix=kol;
    for(int k=0;k<n;k++)
    for(int i=0;i<n;i++){
        kol=kolfix; bool o=0;
        for(int j=k;j<=i;j++) {o=1; if(a[j]==0) kol++; else kol--;}
        if(o)ans=max(kol,ans);
    }
    cout<<ans;
}
