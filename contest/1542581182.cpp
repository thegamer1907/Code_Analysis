#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[105];
    string p;
    cin>>p;
    int n;
    cin>>n;
    //int i=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        //i++;
        
    }
    bool s=false;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==p)
        {
            s=true;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][1]==p[0] && a[j][0]==p[1])
            s=true;
            
        }
    }
    if(s)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}