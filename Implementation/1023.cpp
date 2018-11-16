#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef vector<LL> longnum;

#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define X first
#define Y second
#define pb push_back
#define mp make_pair

vector<int> link,sz,mult;
const int inf = 1e9;

struct edge{
    int a,b,w;
};

void factorize(int x){
    for (int i = 2;i*i <= x;i++)
            while(x % i == 0){mult.pb(i);x /= i;}
    if (x != 1)
        mult.pb(x);
    return;
}

int findd(int x){
    if (link[x] == x)
        return x;
    return link[x] = findd(link[x]);
}

bool same(int a,int b){
    return (findd(a) == findd(b));
}

void unite(int a,int b){
    a = findd(a);
    b = findd(b);
    sz[a] += sz[b];
    link[b] = a;
}

int katini_slova(){
    return 9;
}

int lcm(int a,int b){
    return a/(__gcd(a,b))*b;
}

LL ppow(int x,int y){
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return ppow(x*x,y/2);
    else
        return ppow(x*x,y/2)*x;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int j = 0;j < t;j++){
        for (int i = n - 1;i > 0;i--){
            if (s[i] == 'G' && s[i - 1] == 'B'){
                swap(s[i],s[i - 1]);
                i--;
            }
        }
    }
    cout << s;
    return 0;
}
