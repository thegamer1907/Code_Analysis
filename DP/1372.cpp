#include <iostream>
#include <algorithm>
using namespace std;

const int N = 102;
const int M = 2;

int dp[N] = {0};
int a[N] = {0};
int sup[N] = {0};

void solve(){

    int n, temp;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        temp = a[i] == 1 ? -1 : 1;
        if(dp[i - 1] < 0)
            dp[i] = temp;
        else
            dp[i] += (dp[i - 1] + temp);
        sup[a[i]]++;
    }
    int ans = *max_element(dp+1,dp+n+1);
    if(sup[1] == n){
        cout << n - 1;
        return;
    }
    cout << (ans > 0 ? ans + sup[1] : sup[1]);
}


int main(){
    solve();
}
