#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<time.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define lson l,mid,pos<<1
#define rson mid+1,r,pos<<1|1
typedef long long ll;
const int maxm=1000+5;
const int maxn=1000+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
const double eps=1e-8;
int cnt[20];
int lim;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a;
    for (int i=0;i<n;i++){
        int tmp=0;
        for (int i=0;i<k;i++){
            scanf("%d",&a);
            tmp=(tmp<<1)|a;
        }
        cnt[tmp]++;
    }
    if (cnt[0])return 0*puts("YES");
    for (int i=0;i<(1<<k);i++){
        if (cnt[i]==0)continue;
        cnt[i]--;
        for (int j=0;j<(1<<k);j++){
            if (cnt[j]==0)continue;
            int w[10]={0};
            int flag=1;
            for (int kk=0;kk<k;kk++){
                if ((i>>kk)&1)w[kk]++;
                if ((j>>kk)&1)w[kk]++;
                if (w[kk]>=2)flag=0;
            }
            if (flag)return 0*puts("YES");
        }
        cnt[i]++;
    }
    return 0*puts("NO");
}