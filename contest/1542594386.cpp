#include <bits/stdc++.h>
#define ll long long
#define fr first
#define sc second
#define ii pair<int,int>
#define mp make_pair
#define All(v) v.begin(),v.end()
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int a[26] = {0};
    int b[26] = {0};
    int ok = 0;
    for(int i=0;i<n;i++)
    {
        string r;
        cin>>r;
        if(r == s)
        {
            ok = 1;
        }
        a[r[0]-'a'] = 1;
        b[r[1]-'a'] = 1;
    }
    if(b[s[0]-'a'] == 1 && a[s[1]-'a'] == 1)
    {
      ok  = 1;
    }
    if(ok)
        cout<<"YES";
    else
        cout<<"NO";
}
