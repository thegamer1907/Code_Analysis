#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5;
int N, A[MAX];

int main(){
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", A + i);
    }
    int sum = 1, ans = 1;
    for(int i = 2; i <= N; i++){
        if(A[i - 1] < A[i]){
            sum++;
        }
        else{
            sum = 1;
        }
        ans = max(ans, sum);
    }
    printf("%d\n", ans);
    return 0;
}
