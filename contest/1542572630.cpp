#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[3];
    cin>>s;

    int n,x=0,y=0,flag=0;
    cin>>n;
    char ss[3];

    for(int i=0;i<n;i++)
    {
        cin>> ss ;

        if(s[0]==ss[0]&&ss[1]==s[1])
        {
            flag=1;
        }
        if(ss[0]==s[1]) x++;
        if(ss[1]==s[0]) y++;
    }
    if(flag==1) cout<<"YES\n";
    else if(x>=1&&y>=1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
