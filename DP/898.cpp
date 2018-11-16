#include <bits/stdc++.h>
#define MAX 107

using namespace std;

int arr[MAX];
int main(){
    int n; scanf("%d", &n);
    int qnt = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        qnt += arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        int parcial = qnt;
        for(int j = i; j < n; j++){
            parcial += arr[j] == 0;
            parcial -= arr[j];
            ans = max(ans, parcial);
        }
    }

    printf("%d\n", ans);
    return 0;
}