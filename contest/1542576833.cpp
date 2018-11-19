#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,m[100];
    bool x=false,y=false;
    cin>>s>>n;
    for(int i=0;i<n;i++)
        cin>>m[i];
    for(int i=0;i<n;i++)
     {
        if(m[i]==s)
        {
            x=true,y=true;
            break;
        }
        else
        {
            if(s[0]==m[i][1])
                x=true;
            if(s[1]==m[i][0])
                y=true;
        }
        if(x&&y)
            break;
     }
     if(x&&y)
        cout<<"YES\n";
     else
        cout<<"NO\n";
}
