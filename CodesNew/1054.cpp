#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a);i<=(b);i++)
#define ROF(i,a,b) for(int i = (a);i>=(b);i--)
#define MST(a,x) memset(a,x,sizeof(a))
#define ll long long
#define PB push_back
#define PH push
#define MP make_pair
#define FT first
#define SD second
#define N 1005
#define M 10005
#define INF 1000000007
#define MOD 1000000007
#define MOD2 1000000009
#define eps 1e-8
using namespace std;

string s[2][N];
map<string,int>mp;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m)
    {
        int common = 0;
        mp.clear();
        FOR(i,1,n)cin>>s[0][i],mp[s[0][i]] = 1;
        FOR(i,1,m)
        {
            cin>>s[1][i];
            if(mp.count(s[1][i]))common++;
        }
        int a = n-common,b = m-common;
        if(common%2)a+=(common+1)/2;
        else a+=common/2;
        b+=common/2;
        if(a>b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
