#include <iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include <cstdio>
using namespace std;
int n,k;

int num[(1 << 4) + 5];
int main(){
    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        int tmp = 0;
        for(int j = 0;j < k;j++){
            int a;
            scanf("%d",&a);
            if(a == 1)tmp |= (1 << j);
        }
        num[tmp]++;
    }
    if(k == 1){
        if(num[0] > 0)puts("YES");
        else puts("NO");
        return 0;
    }else if(k == 2){
        if(num[0] > 0 || (num[1] > 0 && num[2] > 0)){
            puts("YES");
        }else puts("NO");
        return 0;
    }else if(k >= 3){
        for(int i = 0;i < (1 << k);i++){
            for(int j = 0;j < (1 << k);j++){
                if((i & j) == 0){
                    if(num[i] > 0 && num[j] > 0){
                        puts("YES");
                        return 0;
                    }
                }
            }
        }
        puts("NO");
        return 0;
    }
    return 0;
}
