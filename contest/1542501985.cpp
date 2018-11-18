//#include "/Users/konwoo/stdc++.h"
#include "bits/stdc++.h"

#include <unordered_set>
#include <set>

//#include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;


#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

//#define mp make_pair
//#define pb push_back
//#define f first
//#define s second
//#define lb lower_bound
//#define ub upper_bound

const int MOD = 1000000009;
double PI = 4*atan(1);

int n,k;
int C[16];


int main(){
//    ifstream fin("/Users/konwoo/input.txt");
//    ofstream fout("/Users/konwoo/output.txt");
//    ifstream fin("multimoo.in");
//    ofstream fout("multimoo.out");
//    freopen("milkorder.in","r",stdin);
//    freopen("milkorder.out","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);


    cin >> n >> k;
    F0R(i, n){
        int s = 0;
        F0R(j, k){
            int a;
            cin >> a;
            s += (a << j);
        }
        if (s == 0) {
            cout << "YES";
            return 0;
        }
        C[s]++;
    }
    F0R(i, (1<<k)){
        F0R(j, (1<<k)){
            if (i&j) continue;
            if (C[i] && C[j]){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";


    return 0;

}








