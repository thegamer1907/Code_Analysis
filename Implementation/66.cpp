#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1030;
const int inf=0x3f3f3f3f;

int main(){
    int n , a , b;
    while (~scanf("%d%d%d", &n, &a, &b)){
        int ans = 0;
        bool flag = false;
        while (true){
            if (n == 2)  {
                flag = true;
                break;
            }
            n /= 2;
            ans ++;
            a = (a+1)/2;
            b = (b+1)/2;
            if (a == b) break;
        }
        if (flag)  puts("Final!");
        else  printf("%d\n", ans);
    }
    return 0;
}
