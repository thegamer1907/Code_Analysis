#include <bits/stdc++.h>
using namespace std;
int N, K, mm, arr[101];
int main(void){
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        mm = (mm < arr[i])?arr[i]:mm;
    }
    int k = K;
    for(int i = 0; i < N; i++){
        k -= (mm - arr[i]);
        arr[i] = mm;
    }
    if(k <= 0){
        printf("%d %d", mm, mm + K);
    }else{
        int r = mm + (k / N) + ((k % N == 0)?0:1);
        printf("%d %d", r, mm + K);
    }
    return 0;
}
