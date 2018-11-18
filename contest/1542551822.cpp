#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[5];
    cin>>s;
    int n;
    cin>>n;
    char p[n][5];
    bool is=false;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(strcmp(p[i],s)==0) is=true;
    }
    if(is) cout<<"YES"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(p[i][1]==s[0])
            {
                for(int j=0;j<n;j++)
                {
                    if(p[j][0]==s[1])
                    {
                        is=true;
                        break;
                    }
                }
            }
            if(is) break;
        }
        if(is) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
