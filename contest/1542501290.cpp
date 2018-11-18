//#include<khoda>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e3 + 100;
const int L = 16;

string s , pre[N] , suf[N];
ll a , b;
set < ll > t[N][L+1];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n;
    cin >> n;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cin >> s;
        for ( int j = 0 ; j < s.size() ; j++ )
        {
            s[j] -= '0';
        }
        for ( int j = 0 ; j < s.size() ; j++ )
        {
            int val = 0;
            for ( int k = j ; k < s.size() ; k++ )
            {
                val = 2 * val + s[k];
                if ( k - j + 1 < L )
                {
                    t[i][k - j + 1].insert(val);
                }
            }
        }
        for ( int j = 0 ; j < min( ll(s.size()) , ll(L) ) ; j++ )
        {
            pre[i] += s[j];
            suf[i] = s[s.size() - j - 1] + suf[i];
        }
        t[i][0].insert(0);
    }
    ll q;
    cin >> q;
    for ( int i = n + 1 ; i <= n+q ; i++ )
    {
        cin >> a >> b;
        string f = pre[a] + pre[b];
        string l = suf[a] + suf[b];
        for ( int j = 0 ; j < min( ll(f.size()) , ll(L) ) ; j++ )
        {
            pre[i] += f[j];
        }
        for ( int j = l.size() - 1 ; j >= 0 ; j-- )
        {
            if ( l.size() - j < L )
            {
                suf[i] = l[j] + suf[i];
            }
        }
        for ( int j = 0 ; j < L ; j++ )
        {
            for ( auto x : t[a][j] )
            {
                t[i][j].insert(x);
            }
            for ( auto x : t[b][j] )
            {
                t[i][j].insert(x);
            }
        }
        int val = 0;
        for ( int j = suf[a].size() - 1 ; j >= 0 ; j-- )
        {
            val += suf[a][j] * ( 1 << ( suf[a].size() - j - 1 ) );
            int h = val;
            for ( int k = 0 ; k < pre[b].size() ; k++ )
            {
                h = h * 2 + pre[b][k];
                if ( k+1+suf[a].size()-j < L )
                {
                    t[i][k+1+suf[a].size()-j].insert(h);
                }
            }
        }
        int ans = 0;
        while ( ans+1 < L && t[i][ans+1].size() == ll( 1 << (ans+1) ) )
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
