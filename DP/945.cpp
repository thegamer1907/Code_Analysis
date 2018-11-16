#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];
int ans, sum;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            int temp = sum;
            for (int k = j; k <= n; ++k){
                if (a[k] == 0) ++temp;
                else --temp;
                ans = max(ans, temp);
            }
        }
    }
    printf("%d", ans);
    return 0;
}
