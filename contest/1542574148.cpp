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
char pass[N];
int n;
char test[110][5];

int main(){
    scanf("%s", pass);
    scanf("%d", &n);
    rep(i, n) scanf("%s", test[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(test[i][1] == pass[0] && test[j][0] == pass[1]){
                puts("YES");
                return 0;
            }
            if(test[j][0] == pass[0] && test[j][1] == pass[1]){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}