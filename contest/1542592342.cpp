#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define PI acos(-1.0)

int main()
{
    char s[5];
    cin>>s;
    int n;
    cin>>n;
    char c[5];
    int ff1=0,ff2=0;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c[0]==s[0]&&c[1]==s[1])
        {
            ff1=1;
            ff2=1;
        }
        if(c[0]==s[1])ff2=1;
        if(c[1]==s[0])ff1=1;
    }
    if(ff1+ff2==2)printf("YES\n");
    else printf("NO\n");
}
