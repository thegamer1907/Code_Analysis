#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-9;
const int oo = 0x3f3f3f3f;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;

#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define FORD(i,a,b) for (int i = int(b)-1; i >= (a); i--)
#define FORIT(i,c) for (__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
#define pb push_back


int res[64][64]; // res[criminals i][node j] = time until policemen catches i criminals starting at node j
int dist[64][64];
int degree[64];
int inside[64];
int main(){
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    memset(dist,oo,sizeof(dist));
    FOR(ii,1,N){
        int a,b,w;
        cin >> a >> b >> w;
        dist[a][b] = dist[b][a] = w;
        degree[a]++;
        degree[b]++;
//        cout << a << "<->" << b << " cost=" << w << endl;
    }
    FOR(i,1,N+1)dist[i][i] = 0;
    FOR(k,1,N+1)FOR(i,1,N+1)FOR(j,1,N+1)dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//    FOR(i,1,N+1){
//        FOR(j, 1,N+1)cout << dist[i][j] << " ";
//        cout << endl;
//    }
    int start;
    int M;
    cin >> start;
    cin >> M;
    FOR(i,1,N+1)inside[i] = 0;
    FOR(i,0,M){
        int a;
        cin >> a;
        inside[a]++;
    }
    FOR(i,1,N+1)res[0][i] = 0;
    FOR(criminals,1,M+1){
        FOR(n,1,N+1){
//            cout << "criminals=" << criminals << " n=" << n << endl;
            int lo = 0, hi =N*50*M;
            while(lo != hi){
                int m = lo + (1+hi - lo) / 2;
                int hidepos = 0;
                FOR(i,1,N+1)if(degree[i]==1){
                    int q = 0;
                    while(criminals - q - 1 >= 0 && dist[n][i] + res[criminals - q - 1][i] >= m){
                        ++q;
                    }
                    hidepos += q;
                    if(hidepos >= criminals)break;
                }
//                cout << "length=" << m << " hidepositions=" << hidepos << endl;
                if(hidepos >= criminals){
                    lo = m;
                } else {
                    hi = m - 1;
                }
            }
//            cout << "lo=" << lo <<  " hi=" << hi << endl;
            res[criminals][n] = lo;
        }
    }
    
    unordered_set<int> done;
    vector<vector<int> > parts;
    FOR(i,1,N+1){
        if(i==start || done.find(i) != done.end())continue;
        vector<int> part;
        FOR(j,1,N+1)if(dist[i][j] < dist[i][start] + dist[start][j]){
            part.pb(j);
            done.insert(j);
        }
        parts.pb(part);
    }
    {
        int lo = 0, hi =N*50*M;
        while(lo != hi){
            int m = lo + (1+hi - lo) / 2;
            bool police_wins = false;
            for(auto part: parts){
                int in_part = 0;
                for(auto it: part)in_part += inside[it];
                int hidepos = 0;
                for(auto i: part)if(degree[i]==1){
                    int q = 0;
                    while(M - q - 1 >= 0 && dist[start][i] + res[M - q - 1][i] >= m){
                        ++q;
                    }
                    hidepos += q;
                    if(hidepos >= in_part)break;
                }
                if(hidepos < in_part){
                    police_wins = true;
                    break;
                }
            }
            //                cout << "length=" << m << " hidepositions=" << hidepos << endl;
            if(!police_wins){
                lo = m;
            } else {
                hi = m - 1;
            }
        }
        cout << lo << endl;
    }
//    cout << res[M][start] << endl;
	return 0;
}
