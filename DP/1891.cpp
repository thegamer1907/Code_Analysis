#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int l=s.length();
        int ab=0,ba=0;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                if(ab==0)
                {
                    ab=1;
                    i++;
                }
            }
            else if(s[i]=='B'&&s[i+1]=='A')
            {
                if(ab==1)
                {
                    ba=1;
                    i++;
                }
            }
        }
        if(ab&&ba)cout<<"YES";
        else
        {
            int ab=0,ba=0;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                if(ba==0)
                {
                    ba=1;
                    i++;
                }
            }
            else if(s[i]=='A'&&s[i+1]=='B')
            {
                if(ba==1)
                {
                    ab=1;
                    i++;
                }
            }
        }
        if(ab&&ba)cout<<"YES";
        else cout<<"NO";
        }
        cout<<endl;
    }
}
