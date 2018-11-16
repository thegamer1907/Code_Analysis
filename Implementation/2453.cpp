#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define MP make_pair
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    k = 240-k;
    for(int i = 1 ; i <= n; ++ i){
        k -= 5*i;
        if(k < 0){
            printf("%d\n",i-1);
            return 0;
        }
    }
    printf("%d\n",n);
    return 0;
}
