#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000][5];
    char p[5];
    int i,j,k,l,t,fl=0;
    cin>>p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s[i];
        if(s[i][0]==p[0]&&s[i][1]==p[1])
            fl=1;
            if(s[i][1]==p[0]&&s[i][0]==p[1])
            fl=1;
    }
    if(fl==0)
    for(i=0;i<t;i++)
    {
        if(fl==0)
        for(j=0;j<t;j++)
        {
            if(s[i][1]==p[0]&&s[j][0]==p[1])
                fl=1;
            if(s[i][0]==p[1]&&s[j][1]==p[0])
                fl=1;
                if(fl==1)break;
        }
    }
    if(fl==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";


}
