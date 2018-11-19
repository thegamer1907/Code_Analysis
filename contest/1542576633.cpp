#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string pw,s[101];
    cin>>pw;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
        {
            cin>>s[i];
            if(s[i]==pw)
                return cout<<"YES\n",0;
        }

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        if(s[i][1] == pw[0] && s[j][0]==pw[1])
            return cout<<"YES\n",0;

    cout<<"NO\n";
}
