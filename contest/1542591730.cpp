#include<bits/stdc++.h>
using namespace std;
int main()
{int n,fh=0,sh=0,an=0;
    string s;

    cin>>s;

    cin>>n;
    string st[n+1];
    for(int h=0;h<n;h++)
    {
        cin>>st[h];
    }

    for(int h=0;h<n;h++)
    {
        if(st[h][0]==s[1]&&st[h][1]==s[0])
            {an=1;break;}

        else if(st[h][0]==s[1]&&st[h][1]!=s[0])
         {
             fh=1;
             if(sh==1)
             {
                 an=1;break;
             }
         }
        else if(st[h][0]!=s[1]&&st[h][1]==s[0])
        {
            sh=1;
            if(fh==1)
            {
                an=1;break;
            }
        }
        else if(st[h][0]==s[0]&&st[h][1]==s[1])
        {
            an=1;break;
        }


    }
    if(an==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
