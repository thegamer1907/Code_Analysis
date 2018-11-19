#include <bits/stdc++.h>

#define fi first
#define se second
#define fin(s) freopen( s, "r", stdin );
#define fout(s) freopen( s, "w", stdout );

const long long N = 110;
const long long mod = 1e9 + 7;
const long long block = 500;

using namespace std;

int n;
string s, t[N];

void solve()
{
        cin >> s >> n;
        for(int i = 1; i <= n; i++){
                cin >> t[i];
                if(t[i] == s){
                        cout << "YES\n";
                        return;
                }
        }
        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                        if(t[i][1] == s[0] && t[j][0] == s[1]){
                                cout << "YES\n";
                                return;
                        }
                }
        }
        cout << "NO\n";
}


bool mtest = false; int main()
{
        //fin("input.txt");
        //fout("output.txt");
        //fin("landscape.in");
        //fout("landscape.out");
        ios_base::sync_with_stdio(0);
        int TE = 1;
        if(mtest)
                cin >> TE;
        while(TE--)
                solve();
        return 0;
}
