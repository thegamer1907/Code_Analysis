#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    int n;
    cin>>s>>n;
    string ss;
    char t[n*2];
    bool con=0;
    int hit=0;
    int z=0;
    int x=0;
    for(int i=0; i<n; i++)
    {
        cin>>ss;
        if(ss==s)
        {
            cout<<"YES\n"; return 0;
        }
        if(s=="ah" && n==1)
        {
            if(ss=="ha") cout<<"YES\n"; return 0;
        }

        if(ss[0]==s[1])
        {
            x++;
        }
        if(ss[1]==s[0])
        {
            z++;
        }

    }
    if(z>0 && x>0)
    {
        cout<<"YES\n"; return 0;
    } else cout<<"NO\n"; return 0;
}
