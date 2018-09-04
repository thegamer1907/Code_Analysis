#include <bits/stdc++.h>
#define pi acos(-1.0 )
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int INF = 0x3f3f3f3f;       // 不能加负号！！！
const LL LL_INF = 0x3f3f3f3f3f3f3f3f;//4e18 ~= 2^62
const int maxn =200000 + 10;
const LL mod = 1e9+7;


int n, d[maxn];
vector<pair<LL, LL> > vec1, vec3;

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &d[i]);
    }
    LL sum=0;
    vec1.push_back(make_pair(0, 0));
    for(int i=1; i<=n; i++){
        sum += d[i];
        vec1.push_back(make_pair(sum, (LL)i));
    }
    sum = 0;
    vec3.push_back(make_pair(0, n+1));
    for(int i=n; i>=1; i--){
        sum += d[i];
        vec3.push_back(make_pair(sum, (LL)i));
    }
    for(int i=n; i>=0; i--){
        int pos = lower_bound(vec3.begin(), vec3.end(), vec1[i]) - vec3.begin();
        if(vec3[pos].first == vec1[i].first && vec3[pos].second > vec1[i].second  ){
            printf("%I64d\n", vec1[i].first);
            return 0;
        }
    }
}
