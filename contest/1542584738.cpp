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

int p[100];
bool ans;
string str[2] = {"NO","YES"};

int total;
int know[4];

void solve(int t){
    if(t == 16){
        if(!total) return;
        bool ok = 1;
      /*  cout << total << endl;
        for2(i,0,4) cout << know[i] << ' ';
        cout << endl;*/
        for2(i,0,4) if(know[i]*2 > total) ok = 0;
        ans |= ok;
        return;
    }
    solve(t+1);
    if(!p[t]) return ;
    total ++;
    for2(i,0,4) if(t & (1<<i) ) know[i]++;
    solve(t+1);
    for2(i,0,4) if(t & (1<<i) ) know[i]--;
    total --;
}

int32_t main(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,k; cin >> n >> k;
    for2(i,0,n){
        int t = 0;
        for2(j,0,k){
            bool b; cin >> b;
            t *= 2;
            t += b;
        }
        for2(j,k,4) t = 2*t;
        p[t] ++;
    }
    solve(0);
    cout << str[ans] << endl;
    return 0;
}

