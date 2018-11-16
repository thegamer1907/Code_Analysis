#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M ;
    int arr[505];
    int w ;

    scanf("%d%d", &N, &M);
    if(M > 1) {
        printf("Yes\n");
        return 0;
    }
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &w);

    for(int i=0; i<N; i++)
        if(arr[i]==0)
            arr[i] = w;

    for(int i=1; i<N; i++) {
        if(arr[i] <= arr[i-1]) {
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
}
