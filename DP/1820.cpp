#include <bits/stdc++.h>
#define osama ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int OO=0x3f3f3f3f;
int main()
{
    string s;
    cin>>s;
    bool f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            f=1;i+=2;
        }
        if(f&&s[i]=='B'&&s[i+1]=='A')
        {
           puts("YES\n");
            return 0;
        }
    }
    f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            f=1;i+=2;
        }
        if(f&&s[i]=='A'&&s[i+1]=='B')
        {
            puts("YES\n");
            return 0;
        }
    }
    puts("NO\n");
    return 0;
}