#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,i,j,temp=0,tem=0;

    string s,f;

    cin>>s;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>f;
        if(f==s)
        {
            temp=1;
            tem=1;
        }
        if(s[0]==f[1])
            temp=1;
        if(s[1]==f[0])
            tem=1;
    }
    if(temp==1&&tem==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
