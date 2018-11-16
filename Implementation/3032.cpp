/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
int n;
struct sc
{
    string s;
};
sc v[1002];
bool pus;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>v[i].s;
        if(!pus)
        {
            if(v[i].s[0]==v[i].s[1] && v[i].s[0]=='O')
                v[i].s[0]=v[i].s[1]='+',pus=1;
            else
                if(v[i].s[3]==v[i].s[4] && v[i].s[3]=='O')
                    v[i].s[3]=v[i].s[4]='+',pus=1;
        }
    }
    if(pus)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    if(pus)
        for(int i=1;i<=n;++i)
            cout<<v[i].s<<'\n';
    return 0;
}
