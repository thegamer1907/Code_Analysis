#include <bits/stdc++.h>
using namespace std;
const int MAXN=100+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char ans[5],str[MAXN][5];
    cin>>ans;
    int n;
    cin>>n;
    bool flag=false;
    for(int i=0;i<n;++i) cin>>str[i];
    for(int i=0;i<n;++i)
    {
        char s[5];
        s[0]=str[i][1];
        for(int j=0;j<n;++j)
        {
            s[1]=str[j][0];
            if(s[0]==ans[0] && s[1]==ans[1])
            {
                flag=1;
                break;
            }
        }
        if(flag) break;
    }

    for(int i=0;i<n;++i)
    {
        if(str[i][0]==ans[0] && str[i][1]==ans[1])
        {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}