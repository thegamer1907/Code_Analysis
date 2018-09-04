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

inline int sum10(ll i){
    ll sum = 0;
    while(i > 0){
        sum += i % 10;
        i /= 10;
    }
    return (sum == 10);
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int k;
    cin >> k;
    int f = 0;
    ll i;

    for(i = 19; ; i += 9){
        if(sum10(i)){
            f++;
        }
        if(f >= k){
            break;
        }
    }
    cout << i << endl;

    return 0;
}
