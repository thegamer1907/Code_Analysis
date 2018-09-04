#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define PI (2 * acos(0.0))
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

int ord(const pair<ll, ll> &a, const pair<ll, ll> &b){
    if(a.fst == b.fst){
        return (a.snd > b.snd);
    }
    return (a.fst < b.fst);
}

ll sumAcc[100100];

int binarySearch(vector<pair<ll, ll> > &v, int l, int r, ll d){
    int mid;
    ll s = v[l].fst;
    while(l <= r){
        mid = (l + r) / 2;
        ll ss = v[mid].fst;
        if(ss - s >= d){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return r;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll> > v;
    for(int i = 0; i < n; i++){
        ll m, s;
        cin >> m >> s;
        v.emplace_back(m, s);
    }
    sort(v.begin(), v.end(), ord);

    sumAcc[0] = v[0].snd;
    for(int i = 1; i < n; i++){
        sumAcc[i] = sumAcc[i - 1] + v[i].snd;
    }
    ll maxi = 0;
    for(int i = 0; i < n; i++){
        int pos = binarySearch(v, i, n - 1, d);
        ll r = (sumAcc[pos] - (i == 0 ? 0 : sumAcc[i - 1]));
        maxi = max(r, maxi);
        if(pos == n - 1){
            break;
        }
    }
    cout << maxi << endl;

    return 0;
}
