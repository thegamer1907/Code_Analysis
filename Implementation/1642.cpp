#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    string s;
    cin>>s;ll f=0;
    ll l = s.length();
    if(l<=6)
    cout<<"NO";
    else
    {
        ll c=0;
        for(int i=0;i<=(l-7);i++)
        {
            for(int j=i;j<7+i;j++)
            {
                if(s[j]==s[i])
                c++;
            }
            if(c==7)
            {
                f=1;
                cout<<"YES";
                break;
            }
            c=0;
        }
        if(f==0)
        cout<<"NO";
    }
    return 0;
}