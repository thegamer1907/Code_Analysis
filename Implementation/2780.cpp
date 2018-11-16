#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define MP make_pair
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int a[maxn];

int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    int ma = 0;
    for(int i = 1 ; i <= n ; ++ i){
        scanf("%d",&a[i]);
        if(a[i] > ma)ma = a[i];
    }
    for(int i = 1 ; i <= n ; ++ i){
        ans += ma-a[i];
    }
    printf("%d\n",ans);
	return 0;
}
