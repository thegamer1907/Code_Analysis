#include <bits/stdc++.h>
#define maxn 100010
std::vector<int> arr(maxn, 0);
int main(){
    int n, m;
    scanf("%i %i", &n, &m);
    int a[n+1], l;
    for(int i = 1; i <= n; i++){
        scanf("%i", &a[i]);
    }
    arr[a[n]] = 1;
    a[n] = 1;
    for(int i = n-1; i>=1; i--){
        if(arr[a[i]] == 0) {arr[a[i]] = 1;a[i] = a[i+1]+1;}
        else a[i] = a[i+1];
    }
    for(int i = 0; i < m; i++){
        scanf("%i", &l);
        printf("%i\n", a[l]);
    }
    return 0;
}
