#include <bits/stdc++.h>

using namespace std;

int a[105];
int sum;

int currSubSum;
int maxSubSum = -1;

int main(){

    int n;
    cin >> n;

    for(int i = 0 ; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    for(int i = 0; i < n; ++i){

        if(currSubSum < 0){
            currSubSum = 0;
        }

        if(a[i] == 1){
            --currSubSum;
        }else{
            ++currSubSum;
        }

        if(currSubSum > maxSubSum){
            maxSubSum = currSubSum;
        }
    }

    int ans = sum + maxSubSum;
    cout << ans << "\n";
///lol
    return 0;
}