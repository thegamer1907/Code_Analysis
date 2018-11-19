#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
#define rep(i,n) for(int i=0; i<n; i++)

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define MP make_pair
#define PB push_back

typedef map<int, int> MII;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;
const int M = 1e9 + 7;
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const ll LINF = 1e18;
// header

const int N = 5;
int n, k;

struct Problem{
    int know[N];
    Problem(){
        rep(i, N) know[i] = 0;
    }
    friend bool operator < (Problem a, Problem b){
        rep(i, N){
            if(a.know[i] != b.know[i]) return a.know[i] < b.know[i];
        }
        return false;
    }
};

vector<Problem> vec;
map<Problem, bool> mp;

bool check(int S){
    int tot = vec.size();
    int numPro = 0;
    int know[N];
    rep(i, N) know[i] = 0;

    for(int i=0;i<tot;i++){
        if(S & (1<<i) ){
            for(int j=0;j<k;j++){
                know[j] += vec[i].know[j];
            }
            numPro++;
        }
    }

    rep(i, k){
        if(know[i]*2 > numPro) return false;
    }
    return true;
}

int main(){
    scanf("%d%d", &n, &k);
    rep(i, n){
        Problem tmp;
        rep(j, k) scanf("%d", &tmp.know[j]);
        if(!mp[tmp]) vec.push_back(tmp);
        mp[tmp] = 1;
    }
   // cout << vec.size() << endl;
    int tot = vec.size();
    for(int i=1;i<(1<<tot);i++){
        if(check(i)) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}