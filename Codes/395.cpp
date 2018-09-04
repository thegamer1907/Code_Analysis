#include<bits/stdc++.h>
using namespace std;
int a[10010], cnt;

int calc(int x){
    int res = 0;
    while(x > 0)res += x % 10, x /= 10;
    return res;
}

int main(){
    cnt = 0;
    for(int i = 19;cnt < 10001;++i){
        if(calc(i) == 10)a[++cnt] = i;
    }
    int k;
    scanf("%d", &k);
    printf("%d\n", a[k]);
    return 0;
}
