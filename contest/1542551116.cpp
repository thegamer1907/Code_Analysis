#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i, a, b) for(int i=a; i<b; i++)
#define ffi For(i, 0, N)
#define ffj For(j, 0, K)
#define ffa ffi ffj
#define s <<" "<<
#define w cout
#define e "\n"
#define pb push_back
#define mp make_pair
#define a first
#define b second
//#define int ll
const int MAXN=200;//, INF=1000000000000000000;
///500,000,000
int N, M, p2[10];
string inp[MAXN];
vector<int> strings[MAXN][2];
set<int> make[MAXN][10];
set<int>::iterator it;

main() {
    //ifstream cin("test.in");
    ios_base::sync_with_stdio(0); cin.tie(0);
    p2[0] = 1;
    For (i, 1, 10) p2[i] = 2*p2[i-1];
    cin >> N;
    ffi {
        cin >> inp[i];
        For (j, 1, min((int)10, (int)inp[i].length()+1)) {
            For (k, 0, inp[i].length()-j+1) {
                int val = 0;
                For (m, k, k+j) {
                    val *= 2;
                    if (inp[i][m] == '1') val++;
                }
                make[i][j].insert(val);
            }
            //w<< "string" s i+1 s ", length" s j<<e; for (it = make[i][j].begin(); it != make[i][j].end(); it++) w<<(*it)<< " "; w<<e;
        }
        For (j, 0, min((int)10, (int)(inp[i].length()))) {
            if (inp[i][j] == '1') strings[i][0].pb(1);
            else strings[i][0].pb(0);
        }
        For (j, max((int)0, (int)(inp[i].length()-10)), inp[i].length()) {
            if (inp[i][j] == '1') strings[i][1].pb(1);
            else strings[i][1].pb(0);
        }
        //w<< "string" s i+1<<e; for (int j: strings[i][0]) w<< j; w<<e;for (int j: strings[i][1]) w<< j; w<<e;
    }
    cin >> M;
    M += N;
    while (N < M) {
        int a, b; cin >> a >> b; a--; b--;
        For (i, 0, 10) {
            for (it = make[a][i].begin(); it != make[a][i].end(); it++) make[N][i].insert(*it);
            for (it = make[b][i].begin(); it != make[b][i].end(); it++) make[N][i].insert(*it);
        }
        vector<int> comb;
        for (int i: strings[a][1]) comb.pb(i);
        for (int i: strings[b][0]) comb.pb(i);
        
        For (j, 1, min((int)10, (int)comb.size()+1)) {
            For (k, 0, comb.size()-j+1) {
                int val = 0;
                For (m, k, k+j) {
                    val *= 2;
                    val += comb[m];
                }
                make[N][j].insert(val);
            }
            //w<< "string" s N+1 s ", length" s j<<e; for (it = make[N][j].begin(); it != make[N][j].end(); it++) w<<(*it)<< " "; w<<e;
        }

        comb.clear();
        for (int i: strings[a][1]) comb.pb(i);
        for (int i: strings[b][1]) comb.pb(i);
        For (j, max((int)0, (int)(comb.size()-10)), comb.size()) strings[N][1].pb(comb[j]);

        comb.clear();
        for (int i: strings[a][0]) comb.pb(i);
        for (int i: strings[b][0]) comb.pb(i);
        For (j, 0, min((int)10, (int)(comb.size()))) strings[N][0].pb(comb[j]);
        //w<< "string" s N+1<<e; for (int j: strings[N][0]) w<< j; w<<e;for (int j: strings[N][1]) w<< j; w<<e;
        int ans = 0;
        For (k, 1, 10) {
            if (make[N][k].size() == p2[k]) ans = k;
            //w<< N+1 s k s make[N][k].size()<<e;
        }
        w<< ans<<e;
        N++;
    }
}
