#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <locale>
#include <unordered_map>
#include <set>

#define INF 100000000000000000
#define MOD 1000000007
#define ll long long
#define FOR(i,n)      for(long long i=0;i<(n);i++)
#define spc << " " <<
#define cte(x) cout << x << endl
#define cts(x) cout << x << " "
#define ce cout << endl
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int> >
#define vvll vector<vector<ll> >
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;
using namespace std;

ll gcd(ll a, ll b){
    if(a == b) return a;
    if(a > b) return gcd(a-b, b);
    return gcd(b-a, a);
}

ll abs(ll a, ll b){
    return (a-b < 0)? (a-b)*-1 : (a-b);
}
 bool isOut(ll y, ll x, ll y1, ll x1){
     if(y >= 0 && y < y1 && x >= 0 && x < x1)
         return false;
     else return true;
 }

char abc[] = {0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1,
    1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1};

ll dirs[] = {1, 0, -1, 0, 0, -1, 0, 1};

struct edge{
    ll fixy, cena, dist;
    bool visited;
    edge(ll x) : fixy(x), dist(100000000), cena(0), visited(false) {}
    bool operator<(const edge &l) const {
        return (l.cena < cena) ? false : true;
    }
};
struct cord{
    ll adresa, pocet;
};

bool desc(edge a, edge b){
    return (a.cena > b.cena) ? false : true;
}

deque<cord> lefts, rights;
ll n, total = 0, pos;

int main(){
    ios_base::sync_with_stdio();
    ll m, temp = 0, best = -100000000000000000, ones = 0, z = 0;
    vll t;
    cin >> n;
    FOR(i, n){
        cin >> m;
        if(m)
            ones++;
        else z++;
        t.push_back(m);
    }
    if(n == 1 and t[0] == 1){
        cte(0);
        return 0;
    }
    if(z == 0){
        cte(ones-1);
        return 0;
    }
    ll k = ones, r = z;
    for(ll i = 0; i < t.size(); i++){
        for(ll x = 0; x < t.size() - i; x++){
            temp = 0;
            z = 0;
            for(ll c = x; c < x + i + 1; c++){
                if(t[c] == 0) temp++;
                else z++;
            }
            temp = temp - z;
            if(temp > best) best = temp;
        }
    }
    if(best <= 0)
        cte(max(k, r));
    else
        cte(max(k, max(r, ones+best)));
    return 0;
}

