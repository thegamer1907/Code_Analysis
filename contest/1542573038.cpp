#include<bits/stdc++.h>
using namespace std;
int arr[16];

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < k; j++){
            int x; scanf("%d", &x);
            tmp = (tmp<<1) | x;
        }
        arr[tmp] = 1;
    }
    int flg = 0;
    for(int i = 0; i < (1<<k); i++){
        if(arr[i]){
            for(int j = 0; j < (1<<k); j++){
                if(arr[j]){
                    int x = i&j;
                    if(x == 0){
                        flg = 1; break;
                    }
                }
            }
        }
        if(flg) break;
    }
    if(flg) printf("YES\n");
    else printf("NO\n");
    return 0;
}