#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define speed std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define int long long

using namespace std;

int main()
{
    speed
    ///freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    int n;
    cin>>n;
    string x[200];
    vector<char> v;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i][0]==s[0]&&x[i][1]==s[1])
        {
            cout<<"YES";
            return 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(x[i][1]==s[0]&&x[j][0]==s[1])
            {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";
    return 0;
}
