/* DHUOJ solution #368848 @ 2018-11-13 16:11:28.588 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    int i;
    while(cin>>s)
    {
        bool f1=false,f2=false,f3=false,f4=false;
        x=s;
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                s[i]='X';
                s[i+1]='X';
                f1=true;
                break;
            }
        }
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                s[i]='X';
                s[i+1]='X';
                f2=true;
                break;
            }
        }
        for(i=0;i<=x.length()-1;i++)
        {
            if(x[i]=='B'&&x[i+1]=='A')
            {
                x[i]='X';
                x[i+1]='X';
                f3=true;
                break;
            }
        }
        for(i=0;i<=x.length()-1;i++)
        {
            if(x[i]=='A'&&x[i+1]=='B')
            {
                x[i]='X';
                x[i+1]='X';
                f4=true;
                break;
            }
        }
        if(f1&&f2 || f3&&f4)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}