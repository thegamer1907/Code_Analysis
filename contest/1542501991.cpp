#include <bits/stdc++.h>
using namespace std;

#define fastio                          ios::sync_with_stdio(false);   cin.tie(0);   cout.tie(0);
#define input(arr, n)                   for(i=1; i<=n; i++) cin >> arr[i];
#define output(arr, n)                  for(i=1; i<=n; i++) {cout << arr[i] << " "; } cout << "\n";
#define print(cont)                     for(auto it : cont) {cout << it << " "; } cout << "\n";

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef pair<char, char> pcc;
int i, j;
const int M = 2e5 + 6, MX = 1 << 4 + 6;

int a[M];
set<int>st;

int main(){
    int n, k;
    cin >> n >> k;
    for(i=1; i<=n; i++){
        int x = 0, y;
        for(j=k-1; j>=0; j--){
            cin >> y;
            if(y) x += (1 << j);
        }
        if(x == 0) return cout << "YES", 0;
        st.insert(x);
    }
    vector<int>v(st.begin(), st.end());
    for(i=0; i<v.size(); i++){
        for(j=0; j<v.size(); j++){
            int coc = v[i] & v[j];
            if(!coc) return cout << "YES", 0;
        }
    }
    cout << "NO";





}