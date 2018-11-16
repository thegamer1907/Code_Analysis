#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cstring>

#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define pll pair<ll,ll>

#define forr(i,x,n) for(int i=(x); i<(n); i++)
#define forn(i,n) forr(i,0,n)

using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 5;
const ll MOD = 1e9 + 7;

ll N, M;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("in.txt","r",stdin);

    string S;
    cin >> S;
    ll ans = 0;
    forn(i,S.size()){
        int cont = 1;
        forr(j,i+1,min(i+7,(int)S.size())){
            if(S[j] == S[j-1]) cont++;
        }
        if(cont>=7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
