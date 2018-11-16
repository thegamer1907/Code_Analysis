#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double k,n,w;
    cin >> k >> n >> w; /// 3 17 4
    int ans =  ((k + (k * w)) * w/2) - n;
    //cout << k << " "<< n<< " " << w<<endl;
    cout << (ans <= 0 ? 0 : ans);
    return 0;
}
