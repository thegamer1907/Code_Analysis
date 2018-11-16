#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    a--;b--;
    int cnt = 0;
    while(a != b){
        cnt ++;
        a/=2;
        b/=2;
    }
    if((1<<cnt) == n){
        cout << "Final!";
    }
    else cout << cnt;
    return 0;
}
