#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long int ll;
typedef vector< pair<int, int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int, int> pii;

const ll INF = 1e18;
const int inf = 1e9;
const int MOD = 1e9 + 7;
const int nax = 100000 + 10;

string s1[nax];
map<string, int> map1;
int n, k;
vector<char> ch;

void solve(int sz, vi idx, string cur)
{
    //cout << sz << endl;
    if(ch.size() == sz)
    {
        for(int i = 0; i < sz;i ++)
        {
            cur[idx[i]] = ch[i];
        }
        //cout << cur << endl;
        if(map1[cur] == 1)
        {
            cout << "YES";
            exit(0);
        }
        return;
    }
    //cout << "JErE" << endl;
    ch.pb('0');
    solve(sz, idx, cur);
    ch.pop_back();
    ch.pb('1');
    solve(sz, idx, cur);
    ch.pop_back();
}
int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        string s = "";
        for(int j = 1; j <= k; j++)
        {
            int num;
            cin >> num;
            s += (num + '0');
        }
        //cout << s << endl;
        map1[s] = 1;
        s1[i] = s;
    }
    string zero = "";
    for(int i = 1; i <= k; i++)
        zero += '0';

    if(map1[zero] == 1)
    {
        cout << "YES";
        return 0;
    }
    //for(int i = 1; i <= n; i++)
      //  cout << s1[i] << endl;
    for(int i = 1; i <= n; i++)
    {
        vi idx;
        string cur = "";
        for(int j = 0; j < k; j++)
        {
            if(s1[i][j] == '1')
                cur += '0';
            else
                cur += 'X', idx.pb(j);
        }
        int sz = (int)idx.size();
        //cout << sz << endl;
        solve(sz, idx, cur);
    }
    cout << "NO";
    return 0;
}
