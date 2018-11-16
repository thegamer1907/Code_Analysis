#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 500010
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

map<int, int> mapa;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int vet[n + 1];
    int cnt[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    cnt[n - 1] = 1;
    mapa[vet[n - 1]] = 1;
    for(int i = n - 2; i >= 0; i--){
        if(mapa.find(vet[i]) == mapa.end()){
            mapa[vet[i]] = 1;
            cnt[i] = cnt[i + 1] + 1;
        } else {
            cnt[i] = cnt[i + 1];
        }
    }

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        x--;
        cout << cnt[x] << endl;
    }

    return 0;
}
