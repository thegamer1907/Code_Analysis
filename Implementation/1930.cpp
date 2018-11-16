#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second
#define clr(v, d) memset(v, d, sizeof(v))
#define mp make_pair

typedef pair<int, int> ii;
typedef vector<ii> vi;
typedef pair<int, pair<int, int> > iii;
typedef vector<iii> vii;
typedef long long ll;
typedef long double Double;
const ll MOD = 1e9+7;
const int MAXN = 1e5+5;
const int INF = 0x3f3f3f3f;



int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, X, Y, Z;
    X = Y = Z = 0;
    cin>>n;
    for(int i=0, x, y, z;i<n;++i){
        cin>>x>>y>>z;
        X += x;
        Y += y;
        Z += z;
    }

    if(!X && !Y && !Z)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

//reading time = 17 18
//thinking time = 20
//coding time = 21
//debug time = 