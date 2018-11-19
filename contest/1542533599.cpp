# pragma GCC optimize("O3")
# include <bits/stdc++.h>
std::pair<int,int> DR[] = {{-1,0},{0,1},{1,0},{0,-1},{-1,1},{-1,-1},{1,1},{1,-1}};
# define ll long long
# define clock (clock() * 1000.0 / CLOCKS_PER_SEC)
# define rc(s) return cout << s,0
# define _ ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
# define db(x) cerr << #x << " = " << x << '\n'
# define pb push_back
# define mp make_pair
# define all(s) s.begin(),s.end()
# define sz(x) (int)((x).size())
# define int ll
using namespace std;

string s;
int n;
string str[101];

int32_t main(){_
    //freopen("input","r",stdin);
    cin >> s;
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> str[i];
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            if(str[i] == s) rc("YES");
            string ss = "";
            ss += str[i][1];
            ss += str[j][0];
            if(ss == s) rc("YES");
            ss = "";
            if(i == j) ss += str[j][1];
            if(i == j) ss += str[i][0];
            if(ss == s) rc("YES");
        }
    }
    rc("NO");
}