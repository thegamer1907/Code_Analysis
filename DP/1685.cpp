#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size()>=4)
    {
        int c=0;
        int d=0;
        int aa=0;
        int ab=0;
        for(int i=0;i<=(s.size()-2);i++)
        {
            if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A')
            {
                d++;
                i+=2;
            }
            else if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B')
            {
                d++;
                i+=2;
            }
            else if(s[i]=='A' && s[i+1]=='B')
            {
                if(aa==0)
                {
                    c++;
                    i++;
                    aa=1;
                }    
            }
            else if(s[i]=='B' && s[i+1]=='A')
            {
                if(ab==0)
                {
                    c++;
                    i++;
                    ab=1;
                }    
            }
            if((c>=2) || (c>=1 && d>=1) || (d>=2))  break;
        }
        if((c>=2) || (c>=1 && d>=1) || (d>=2))    cout << "YES\n";
        else     cout << "NO\n";
    }
    else    cout << "NO\n";
    return 0;
}