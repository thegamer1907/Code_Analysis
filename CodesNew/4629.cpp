/*
 * Deleted code is debugged code :)
 */
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define pp pair<ll,ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define pb push_back
#define inmap(m,u) m.find(u)!=m.end()
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FREV(i,a,b) for(i=a;i>=b;i--)
#define FORI(a) for(auto it=a.begin();it!=a.end();it++)
#define READ(a,i,n) FOR(i,0,n) { sll(a[i]);}
#define DEBUG(x) cerr<<"In file "<< __FILE__ <<" at line "<< __LINE__ <<" :: "<< #x <<" = "<<x<<endl
#define sll(n) scanf("%lld", &n)
#define sll2(n,m) scanf("%lld %lld", &n, &m)
#define si(n) scanf("%d", &n)
#define ss(n) scanf(" %s", n)
#define sc(n) scanf(" %c", &n)
#define INF 1000000000000007
#define MOD 1000000007

using namespace std;

template<typename T>
void prn(T first) {
    cout << first << "\n";
}

template<typename T, typename... Args>
void prn(T first, Args... args) {
    cout << first << " ";
    prn(args...);
}

/*******************************************RANDOM STUFF BEGINS HERE**************************************************/

int main() {
    ll i,j,t,n,res;
    sll(n);
    res = n;
    vi a(n);
    vector<bool> has_child(n,false);
    READ(a,i,n);
    sort(all(a));
    i=0,j=n/2;
    while(j < n) {
        if (has_child[i] == true) {
            j--;
            i++;
        }
        else if (2*a[i] <= a[j]) {
            res--;
            i++;
            has_child[j] = true;
        }
        j++;
    }
    cout << res;
    return 0;
}