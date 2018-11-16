#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>


#define ull unsigned long long
#define pii pair<ll, ll>
#define mp make_pair
#define ll long long
#define pb push_back
#define deb(x) cout << #x << " = " << x << endl;
const ll mod = 1000000007;
const ll inf = 1000000000;


using namespace std;


template <class T>
void read_vector(vector<T> & __cur){
    for (T &_c : __cur){
        cin >> _c;
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, a, b; cin >> n >> a >> b;
    vector<int> game(n);
    for (int i = 0; i < n; i++){
        game[i] = i + 1;
    }
    ll match = 1;
    while (game.size() != 2){
        vector<int> cnt;
        for (int i = 1; i < game.size(); i += 2){
            if ((game[i] == a && game[i - 1] == b) || (game[i] == b && game[i - 1] == a)){
                cout << match;
                return 0;
            }
            else{
                if (game[i] == a || game[i] == b){
                    cnt.emplace_back(game[i]);
                }
                else{
                    cnt.emplace_back(game[i - 1]);
                }
            }
        }
        game = cnt;
        match++;
    }
    cout << "Final!";
    return 0;
}

