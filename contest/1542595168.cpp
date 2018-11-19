//A
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define red(i,r,l) for(int i=r;i>=l;i--)
#define re(i,n) for(int i=0;i<n;i++)
#define db(x) cout<<#x<<"="<<(x)<<" "
#define el cout<<endl
#define PII pair<int, int>
#define PIII pair<PII, int>
#define c0 first
#define c1 second
using namespace std;
typedef long long ll;
const int MXN = 110;
int n;

char a[MXN],b[MXN][MXN];
int main()
{
    scanf("%s", a);
    scanf("%d", &n);
    re(i, n)
    {
        scanf("%s", b[i]);
        if (b[i][0] == a[0] && b[i][1] == a[1])
        {
            puts("YES");
            return 0;
        }
    }
    re(i, n)
    re(j, n)
        if (b[i][1] == a[0] && b[j][0] == a[1])
        {
            puts("YES");
            return 0;
        }
    puts("NO");
    return 0;
}
