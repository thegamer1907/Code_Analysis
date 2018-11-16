#include <bits/stdc++.h>

using namespace std;
int n, k;
int ans = 0, tmp = -1, prevEntry = -1;
int main(){
    cin >> n >> k;
    while(n--){
        cin >> tmp;
        if(tmp == prevEntry){
            ++ans;
        }else if(ans < k && tmp >= k){
            ++ans;
            prevEntry = tmp;
        }else if(tmp > 0 && tmp < k && ans < k){
            ++ans;
            prevEntry = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}