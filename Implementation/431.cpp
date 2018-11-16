#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, cnt = 0;
    scanf("%d %d", &n, &k);

    int sc[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &sc[i]);
    }

    for (int i = 0; i < n; i++){
        if (sc[i] > 0 && sc[i] >= sc[k-1]){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}
