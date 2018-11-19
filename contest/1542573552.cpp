#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[1000];
    string c;
    int i,j,n;
    cin>>c;
    cin>>n;
    int p=0,r=0,s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i][0]==c[0]&&a[i][1]==c[1])p=1;
        else
        {
            if(a[i][0]==c[1])r=1;
            if(a[i][1]==c[0])s=1;
        }
    }
    if(p==1||(s==1&&r==1))cout<<"YES\n";
        else cout<<"NO\n";
    }
