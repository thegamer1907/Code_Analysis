// In The Name Of God
#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define int long long
#define ll long long
#define for2(a,b,c) for(int (a) = (b); (a) < (c); (a)++)
#define setp cout << fixed << setprecision(7)
#define endl "\n"
#define minit(a,b) a = min(a,b)
#define maxit(a,b) a = max(a,b)
#define PII pair<int,int>
#define Vec vector<int>
#define error(x) cerr << #x << " = " << (x) << endl;
#define all(x) (x).begin() , (x).end()

const ll inf = ~0ull/4;
const int maxn = 210000;

/////////////////////////////////////////////////////////////////////

bool block[12];
bool b[12];

int32_t main(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int h,m,s; cin >> h >> m >> s;
    int t,T; cin >> t >> T;
    h %= 12;
    t %= 12;
    T %= 12;
    //h--,t--,T--;
    if(m || s) //cout << h << endl;
        b[h] = 1;
    else
        block[h] = 1;
    if(m%5 || s) b[m/5] = 1;
    else block[m/5] = 1;
    if(s%5) b[s/5] = 1;
    else block[s/5] = 1;

    //for2(i,0,12) cout << block[i] << ' ' << b[i] << endl;

    if(t == T){
        cout << "YES" << endl;
        return 0;
    }
    int cur = t;
    while(1){
        if(block[(cur+1)%12] || b[cur]) break;
        cur++;
        cur %= 12;
        if(cur == T){
            cout << "YES" << endl;
            return 0;
        }
    }
    cur = T;
    while(1){
        if(block[(cur+1)%12] || b[cur]) break;
        cur++;
        cur %= 12;
        if(cur == t){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

