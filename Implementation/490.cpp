#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int t[n+1];
    int ans = 0;
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    int i = 0;
    while(i<n && t[i] > 0 && t[i] >= t[k-1]){
        ans++;
        i++;
    }
    cout << ans;
    return 0;
}