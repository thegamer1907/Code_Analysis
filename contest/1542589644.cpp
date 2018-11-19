# include <bits/stdc++.h>

using namespace std;

# define pb push_back
# define pll pair <ll, ll>
# define mp make_pair
# define fi first
# define se second

typedef long long ll;

const ll maxn = (ll)5e5;
const ll linf = (ll)1e16;
const ll mod = (ll)1e9 + 7;

string s;
ll n;
string ss[101];

int main(){
    cin >> s;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> ss[i];
    }
    string s2;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            s2.clear();
            s2 = ss[i] + ss[j];
            for(ll k = 0; k < s2.size() - 1; k++){
                if(s[0] == s2[k] && s[1] == s2[k + 1]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";



    return 0;
}
