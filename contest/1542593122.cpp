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

char s[10], t[10];

int main(){

    int n;
    scanf("%s %d", s, &n);

    int a = 0, b = 0, c = 0, d = 0;
    while(n--){
        scanf(" %s", t);

        if(t[0] == s[0]) a = 1;
        if(t[0] == s[1]) b = 1;
        if(t[1] == s[0]) c = 1;
        if(t[1] == s[1]) d = 1;

        if(t[0] == s[0] && t[1] == s[1]) return printf("YES\n"), 0;
    }

    if((b && c)) printf("YES\n");
    else printf("NO\n");




    return 0;
}
