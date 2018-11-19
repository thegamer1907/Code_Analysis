#include <bits/stdc++.h>

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ep emplace
#define MOD 1000000007LL
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for1(i, n) for(int i = 1; i <= int(n); i++)
#define ford(i, n) for(int i = int(n) - 1; i >= 0; i--)
#define fore(i, a, b) for(int i = int(a); i <= int(b); i++)
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;

typedef long long ll;

const ll oo = 1000000000000000000;
const int N = 100005;


int main(){
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int g = 0;
    if(d > e) swap(d, e);
    
    if(d <= a && a < e) g++;
    if(((5*d)%60 <= b && b < (5*e)%60) || (5*d <= b && b < 5*e)) g++;
    if(((5*d)%60 <= c && c < (5*e)%60) || (5*d <= c && c < 5*e)) g++;

    printf("%s\n", g == 0 || g == 3 ? "YES" : "NO");



    return 0;
}
