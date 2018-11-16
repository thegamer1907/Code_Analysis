#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l,m,n,t;
    cin>>n>>t;
    int ara[n+1];
    for(i=1; i<n; i++)
        cin>>ara[i];
    ara[n]=1;
    for(i=1; ; )
    {
        i+=ara[i];
        //cout<<i<<endl;
        if(i>n)
            break;
        if(i==t || t==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
