#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define X first
#define Y second
#define sz(x) (int)((x).size())
#define pii pair<int,int>
#define MOD (ll)(1e9 + 7)
#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
typedef vector<int> vi;
#define inf (int)(1e9+5)

map<string,bool> M;
int main() {
    int n,m;
    cin >> n >> m;
    
    int cnt=0;
    vector<string> vec1(n),vec2(m);
    string st;
    rep(i,n+m) {
        if(i < n) {
            cin >> vec1[i];

            M[vec1[i]]=1;
        }
        else{
            cin >> vec2[i-n];
            if(M[vec2[i-n]])
                cnt++;
            M[vec2[i-n]]=1;
        }
    }
    if((cnt/2)+(cnt%2)+(n-cnt) > (cnt/2)+m-cnt)
        cout << "YES\n";
    else
        cout << "NO\n";

}