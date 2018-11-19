#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    ll n;
    cin>>n;
    ll i,j;
    vector <string> b(102);
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<n; i++)
    {
        if (s == b[i])
        {
            cout<<"YES";
            return 0;
        }
    }

    for(i=0; i<n; i++)
    {
        if (s[0] == b[i][1])
        {
            for(j=0; j<n; j++)
            {
                if (s[1] == b[j][0])
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";



    return 0;
}
