#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define MP make_pair
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int n;
int id[maxn];

int main(){
    scanf("%d",&n);
    int cnt = 0;
    for(int i = 1 ; i <= n ; ++ i){
        int a;
        scanf("%d",&a);
        for(int j = 1 ; j <= a ; ++ j){
            id[++cnt] = i;
        }
    }
    int m;
    scanf("%d",&m);
    while(m--){
        int a;
        scanf("%d",&a);
        printf("%d\n",id[a]);
    }
    return 0;
}
