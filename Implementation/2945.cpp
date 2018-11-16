#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define MP make_pair
typedef long long ll;
const int mod = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const int maxn = 1e5 + 5;

int sum[maxn];
int n,q;

int main(){
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; ++ i){
        int a;
        scanf("%d",&a);
        sum[a]++;
    }
    for(int i = 1 ; i < maxn ; ++ i)sum[i] += sum[i-1];
    scanf("%d",&q);
    while(q--){
        int m;
        scanf("%d",&m);
        if(m >= maxn)printf("%d\n",sum[maxn-1]);
        else printf("%d\n",sum[m]);
    }
	return 0;
}
