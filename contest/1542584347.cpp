
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

int n,k;
bool vis[1<<5];

bool ok(int x,int y) {
    int cnt[5]={0};
    for (int i=0;i<k;i++) {
        if (x&(1<<i)) cnt[i]++;
        if (y&(1<<i)) cnt[i]++;
        if (cnt[i]>1) return false;
    }
    return true;
}

bool solve() {
    int a;
    for (int i=0;i<n;i++) {
        int num=0;
        for (int j=0;j<k;j++) {
            scanf("%d",&a);
            if (a==1) num|=(1<<j);
        }
        vis[num]=true;
    }
    if (vis[0]) return true;
    for (int i=1;i<(1<<k);i++) {
        for (int j=i+1;j<(1<<k);j++) {
            if (vis[i]&&vis[j]&&ok(i,j)) return true;
        }
    }
    return false;
}

int main()
{
    scanf("%d%d",&n,&k);
    if (solve()) printf("yes\n");
    else printf("no\n");
}

