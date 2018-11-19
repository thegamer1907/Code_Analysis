#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define all(v) v.begin(), v.end()

const int N = 26;
const int M = 200 + 7;

string pre[M], suf[M];
set<int> st[M][N];


int main()
{
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n;
    for (int x=0; x<n; x++)
    {
        string s;
        cin >> s;
        pre[x] = s;
        suf[x] = s;
        string tmp = s;
        //cout << pre[x] << " " << suf[x] << " " << tmp <<  " ±\n";
        for (int i=1; i<min(N, (int)tmp.size()+1); i++)
        {
            int num = 0;
            for (int j=0; j+1<i; j++)
                num = num * 2 + (tmp[j] == '1');
            for (int j=i-1; j<(int)tmp.size(); j++)
            {
                num = num * 2 + (tmp[j] == '1');
                st[x][i].insert(num);
                num ^= (tmp[j-i+1] == '1') << (i-1);
            }
        }
    }
    cin >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        for (int i=0; i<N; i++)
        {
            st[n][i] = st[u][i];
            for (auto x : st[v][i])
                st[n][i].insert(x);
        }
        pre[n] = pre[u] + pre[v];
        pre[n].resize(min((int)pre[n].size(), N));
        suf[n] = suf[u] + suf[v];
        reverse(all(suf[n]));
        suf[n].resize(min((int)suf[n].size(), N));
        reverse(all(suf[n]));
        string tmp = suf[u] + pre[v];
        //cout << pre[n] << " " << suf[n] << " " << tmp <<  " ±\n";
        for (int i=1; i<min(N, (int)tmp.size()+1); i++)
        {
            int num = 0;
            for (int j=0; j+1<i; j++)
                num = num * 2 + (tmp[j] == '1');
            for (int j=i-1; j<(int)tmp.size(); j++)
            {
                num = num * 2 + (tmp[j] == '1');
                //cout << j << " " <<  num << " ~\n";
                st[n][i].insert(num);
                num ^= (tmp[j-i+1] == '1') << (i-1);
                //cout << num << " !\n";
            }
        }
        int res = 0;
        for (int i=1; i<N; i++)
            if (st[n][i].size() == (1 << i))
                res = i;
        n++;
        cout << res << "\n";
    }

    return 0;
}
