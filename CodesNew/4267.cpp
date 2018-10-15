#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, i, j, c=0, l;
    cin>>n;
    string s[n], t, x, ans[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    t = s[n-1];
    ans[n-1] = t;
    for(i = n-2; i>=0; i--)
    {
        l = min(t.length(), s[i].length());
        x = "#";
        for(j = 1; j<l; j++)
            if(t[j] < s[i][j])
            {
                c += s[i].length() - j;
                break;
            }
            else if(t[j] == s[i][j])
            {
                x += t[j];
            }
            else
            {
                x = s[i];
                break;
            }
        ans[i] = x;
        t = x;  
    }
    for(i=0;i<n;i++)
        cout<<ans[i]<<"\n";
    return 0;
}