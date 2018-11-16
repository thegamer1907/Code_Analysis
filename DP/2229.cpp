#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define MOD 1000000007
#define MOD2 1000000009
#define bas 29
#define bas2 19
#define oo 1000000000
using namespace std;
int n, m, q;
int f[100009];
int a[100009];
int res[100009];
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int re = 0;
    for(int i = n - 1; i >= 0; i--){
        if(f[a[i]] == 0){
            re++;
            f[a[i]]++;
        }
        res[i] = re;
    }
    for(int i = 0; i < m; i++){
        cin >> q;
        q--;
        cout << res[q] << endl;
    }
}

