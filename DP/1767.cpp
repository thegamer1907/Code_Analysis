#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define INF 0x3f3f3f3f
const int N=1e5+4;
string s;
int main()
{
    cin>>s;
    int f=0,g=0;
    for(int i=1; i<s.size(); i++)
    {
        if(i<s.size()-1&&f&&s[i]=='A'&&s[i+1]=='B')
            g=1;
        if(s[i]=='A'&&s[i-1]=='B')
            f=1;

    }
    if(g)
        puts("YES");
    else
    {
        f=g=0;
        for(int i=1; i<s.size(); i++)
        {
            if(i<s.size()-1&&f&&s[i]=='B'&&s[i+1]=='A')
                g=1;
            if(s[i]=='B'&&s[i-1]=='A')
                f=1;

        }
        if(g)puts("YES");
        else puts("NO");
    }
}
/*


*/
