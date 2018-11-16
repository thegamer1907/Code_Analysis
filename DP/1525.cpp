#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1) ans++;
    }
    if(ans == n) ans = n - 1;
    int mm = 0, m = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1)
            mm--;
        else
            mm++;
        if(mm > m)
            m = mm;
        if(mm <= 0){
            mm = 0;
        }

    }
    ans += m;
    cout << ans << "\n";


    return 0;
}