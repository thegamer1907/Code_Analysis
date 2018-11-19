#include<bits/stdc++.h>
using namespace std;
const int maxn = 210;

string str[maxn];
int dp[maxn];
int n,m;

int solve(const string &s)
{
    for(int i=10;i>=0;i--)
    {
        bool flag = false;
        for(int j=0;j<1<<i;j++)
        {
            string tmp;
            for(int k=0;k<i;k++)
            {
                if(j&(1<<k))
                    tmp+='1';
                else tmp+='0';
            }
            if(s.find(tmp) == s.npos)
            {
                flag = true;
                break;
            }
        }
        if(!flag) return i;
    }
    return 0;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>str[i];
    cin>>m;
    for(int i=n+1;i<=n+m;i++)
    {
        int a,b;
        cin>>a>>b;
        str[i] = str[a] + str[b];
        if(str[i].length()>1000)
            str[i] = str[i].substr(0,500) + str[i].substr(str[i].length()-500,500);
        dp[i] = max({dp[a],dp[b],solve(str[i])});
        cout<<dp[i]<<endl;
    }
    return 0;
}
