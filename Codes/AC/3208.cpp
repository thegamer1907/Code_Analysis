
#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int,int>

const int N=100010;
int n,a[N];
int f(int val,int i) {
    if (a[i]+1<=i) return 0;
    int tmp=a[i]+1-i;
    int ret=tmp/n;
    if (tmp%n!=0) ret++;
    return ret;
}

int main()
{
    scanf("%d",&n);
    int mn=INF;
    int idx=-1;
    for (int i=1;i<=n;i++) {
        scanf("%d",a+i);
        int tmp=f(a[i],i);
        if (tmp<mn) {
            mn=tmp;
            idx=i;
        }
    }
    printf("%d\n",idx);
}