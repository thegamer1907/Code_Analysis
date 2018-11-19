#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <set>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <ctime>
#include <stack>
#include <cassert>
#define mp make_pair
#define pb push_back
#define mst(a,b)  memset((a),(b),sizeof (a))
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const int maxn=2002;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;

string u;
string k[1100];
int main() {
#ifdef local
//    freopen("in.txt", "r", stdin);
#endif
    ios::sync_with_stdio(0);cin.tie(0);
    cin>>u;
    int n;cin>>n;
    for(int i=1;i<=n;++i){
        cin>>k[i];
        if(u==k[i]){
            cout<<"YES";return 0;
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(k[i][0]==u[1]&&k[j][1]==u[0]){
                cout<<"YES";return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
