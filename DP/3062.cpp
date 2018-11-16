#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 5005;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int a[maxn],b[maxn];
ll ans[maxn];

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; ++ i)scanf("%d",&a[i]);
    for(int i = 1 ; i <= n ; ++ i)scanf("%d",&b[i]);
    for(int i = 1 ; i <= n ; ++ i)ans[i] = b[i];
    for(int t = 2 ; t <= 3 ; ++ t){
        for(int i = n ; i >= 1 ; -- i){
            if(ans[i] == INF)continue;
            ll tmp = INF;
            for(int j = 1 ; j < i ; ++ j){
                if(a[j] < a[i] && ans[j] < tmp)tmp = ans[j];
            }
            if(tmp == INF)ans[i] = INF;
            else ans[i] = tmp + b[i];
        }
    }
    ll res = INF;
    for(int i = 1 ; i <= n ; ++ i)if(ans[i] < res)res = ans[i];
    if(res == INF)res = -1;
    printf("%lld\n",res);
    return 0;
}
