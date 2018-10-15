#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[101];

int main(){
    while(scanf("%d%d", &n, &m) == 2){
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        int mm = m;
        for(int i = 0; i < n; i++){
            m -= a[n-1]-a[i];
        }
        if(m <= 0){
            printf("%d %d\n", a[n-1], a[n-1]+mm);
            continue;
        }
        int s = m%n > 0;
        //printf("%d %d\n", m, s);
        printf("%d %d\n", a[n-1]+m/n+s, a[n-1]+mm);
    }
}
