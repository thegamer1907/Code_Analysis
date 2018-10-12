#include<bits/stdc++.h>
using namespace std;

const int N = 150;
int arr[N];

int main(){
    int n, m;

    cin >> n >> m;

    int mn = 100000, mx = -1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mn = min(arr[i], mn);
        mx = max(arr[i], mx);
    }

    int dif = 0;
    for(int i = 0; i < n; i++) {
        dif += (mx - arr[i]);
    }

    int ans;
    if(dif > m) {
        ans = mx;
    } else {
        ans = ceil((m-dif)/(double)n);
        ans += mx;
    }
    cout << ans << " " << (mx + m) << endl;
    return 0;
}
