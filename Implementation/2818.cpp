#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int np[maxn];

void init(){
    np[1] = 1;
    for(int i = 2 ; i <= 100000 ; ++ i){
        if(!np[i]){
            for(int j = i + i ; j < maxn ; j += i)np[j] = 1;
        }
    }
}

int main(){
    init();
    int n,ans= 0,Max=  0;
    scanf("%d",&n);
    if(n % 2 == 0){
        ans = n / 2;
        printf("%d\n",ans);
        for(int i = 1 ; i <= ans ; ++ i){
            printf("2 ");
        }
        printf("\n");
    }
    else{
        if(!np[n])Max = n,ans = 1;
        int cnt = 0;
        while(n > 1){
            n -= 2;
            cnt++;
            if(!np[n])Max = n,ans = cnt + 1;
        }
        printf("%d\n",ans);
        for(int i = 1 ; i < ans ; ++ i){
            printf("2 ");
        }
        printf("%d\n",Max);
    }
    return 0;
}
