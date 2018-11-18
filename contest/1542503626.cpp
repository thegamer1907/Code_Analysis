#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<map>
using namespace std;
typedef long long LL;
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
const int maxn = 100000+10;
const LL mod = 1000000007;
int cnt[105];
int a[5];
int main() {

    ios::sync_with_stdio(false);
    for (int i=0;i<5;++i) {
        cin>>a[i];
        if (1<=i&&i<=2) {
            continue;
        }
        a[i]=a[i]*5%60;
    }
    for (int i=0;i<3;++i) {
        ++cnt[a[i]];
    }
    if (a[3]>a[4]) {
        a[3]^=a[4];
        a[4]^=a[3];
        a[3]^=a[4];
    }
    int ans=0;
    for (int i=a[3];i<a[4];++i) {
        ans+=cnt[i];
    }
    puts(ans%3?"NO":"YES");
    return 0;
}
