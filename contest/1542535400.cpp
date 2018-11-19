#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> vs;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        vs.pb(x);
    }

    int ok = 0;

    for(int i = 0; i < n and not ok; i++){
        for(int j = 0; j < n and not ok; j++){
            string res = vs[i] + vs[j];
            if(res.find(s) != string::npos){
                ok = 1;
                break;
            }
        }
    }

    if(ok){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}