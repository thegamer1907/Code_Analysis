#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K;
    scanf("%d%d",&N,&K);
    int arr[N], arr2[K];
    for(int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < K; i++){
        scanf("%d",&arr2[i]);
    }
    sort(arr2, arr2 + K);
    int pivo = K - 1;
    for(int i = 0; i < N; i++){
        if(arr[i] == 0){
            arr[i] = arr2[pivo];
            pivo--;
        }
    }
    for(int i = 1; i < N; i++){
        if(arr[i] < arr[i - 1]){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}