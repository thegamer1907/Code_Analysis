#include <bits/stdc++.h>
//#include <unordered_set>
using namespace std;

#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define klar(v) memset(v, 0, sizeof(v))
#define bust ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define gcd(a, b) __gcd(a, b);
#define debug cout << "chuj" << endl;
#define endl "\n"

typedef vector<int> vi;

typedef vector<pair<int, int> > vpii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef long long ll;
const int maxn = 1e5+10;

vector <int> field[maxn], dp[maxn];
map <pii, bool> ans;
vi quer[maxn];

void gemacht(int n, int m){
    multiset <int> seth;
    dp[0].reserve(m+3);
    for(int i = 0; i < m; i++){
        seth.insert(1);
        dp[0].pb(1);
    }
    for(auto j: quer[1]){
        if(*seth.begin() <= j)
            ans[mp(j, 1)] = true;
        else ans[mp(j, 1)] = false;
    }
    for(int i = 1; i < n; i++){
        dp[i].reserve(m+3);
        for(int j = 0; j < m; j++){
//            cout << i << " | " << j << endl;
            if(field[i][j] >= field[i-1][j]){
//                cout << "nie zmieniam " << dp[i-1][j] << endl;
                dp[i].pb(dp[i-1][j]);
            }
            else{
                dp[i].pb(i+1);
//                cout << dp[i-1][j] << endl;
//                if(seth.find(dp[i-1][j]) != seth.end()){
//                    cout << "usuwam " << dp[i-1][j] << endl;
                    seth.erase(seth.find(dp[i-1][j]));
//                }
//                cout << "dodaje " << i+1 << endl;
                seth.insert(i+1);
            }
        }
//        cout << "zawartosc seta\n";
//        for(auto j: seth)cout << j << " ";
//        cout << endl;
        for(auto j: quer[i+1]){
            if(*seth.begin() <= j)
                ans[mp(j, i+1)] = true;
            else ans[mp(j, i+1)] = false;
        }
    }
}

int main(){
    bust
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        field[i].reserve(m+3);
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            field[i].pb(x);
        }
    }
    vpii res;
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        res.pb(mp(a, b));
        quer[b].pb(a);
    }
    gemacht(n, m);
    for(auto i: res)cout << (ans[i]?"Yes\n":"No\n");
}

