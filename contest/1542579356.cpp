#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

const int win_size = 18;
const int mod = 1<<win_size;
char DP[200][mod*2+1];
string L[200];
string R[200];

void relaxlr(int ind)
{
    if(L[ind].size() > win_size)
    {
        L[ind] = L[ind].substr(0,win_size);
        R[ind] = R[ind].substr(R[ind].size()-win_size, win_size);
    }
}

void add_mask(int mask, int len, int ind)
{
    while(len>1)
    {
        DP[ind][len+mask%len] = 1;
        len /= 2;
    }
}

void add_str(string str, int ind)
{
    int init = 1;
    int len = 1;
    for(char c:str)
    {
        len = min(len*2, mod);
        init = init*2 + (c=='1');
        init %= mod;
        add_mask(init, len, ind);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>L[i];
        R[i] = L[i];
        add_str(L[i], i);
        relaxlr(i);
    }
    int m;
    cin>>m;
    for(int i = 0; i < m; ++i)
    {
        int ind = n + i;
        int l, r;
        cin>>l>>r;
        --l, --r;
        for(int j = 0; j <= 2*mod; ++j)
            DP[ind][j] = DP[l][j] | DP[r][j];
        L[ind] = L[l]+L[r];
        R[ind] = R[l]+R[r];
        relaxlr(ind);
        add_str(string(R[l]+L[r]), ind);
        int ma = 2;
        while(DP[ind][ma])++ma;
        int ans = 0;
        while(ma)
        {
            ++ans;
            ma /= 2;
        }
        cout<<ans-2<<endl;
    }
    return 0;
}
