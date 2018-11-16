#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,v;
    while(cin>>n>>m){
    int a[n],s[n];
    for(i=0;i<n;i++)
    {
        cin>>v;
        a[i]=v;
    }
    map<int,bool>d;
    for(i=n-1;i>=0;i--)
    {
        d[a[i]]=true;
        s[i]=d.size();
    }
    for(i=0;i<m;i++)
    {
        cin>>v;
        cout<<s[v-1]<<endl;
    }
    return 0;
}
}
