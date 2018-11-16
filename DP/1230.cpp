#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, i, j, k, pre0[105] = {0}, pre1[105] = {0}, x = 0, y = 0, arr[105], ans = 0, cnt = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        (arr[i]) ? pre1[i]++, ans++ : pre0[i]++;

    }
    for(int i = 1; i <= n; i++)pre1[i] += pre1[i-1], pre0[i] += pre0[i-1];

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            cnt = max(cnt, ans - (pre1[j] - pre1[i-1]) + (pre0[j] - pre0[i-1]));
        }
    }

    cout << cnt;






    return 0;
}
