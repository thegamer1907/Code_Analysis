#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,s=0,f=0;
    cin>>n>>m;
    int p[n];
    for(i=1;i<n;i++) cin>>p[i];
    for(i=1;i<n;)
    {
        i=i+p[i];
        if(i==m){
            f=1;break;}
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        return 0;
}
