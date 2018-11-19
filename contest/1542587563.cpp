#include<bits/stdc++.h>
using namespace std;
string woe[103];
int main()
{
    long long n,i,j;
    string s;
    cin>>s;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>woe[i];
        if(woe[i]==s)
        {
            cout<<"YES\n"; return 0;
        }
    }
    for(i=0;i<n;++i)
    {
        if(woe[i][1]==s[0])
        {
            for(j=0;j<n;++j)
            {
                if(woe[j][0]==s[1])
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
}
