#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;
const int INF = 0x7fffffff;
const double PI = acos(-1);

char ch[5];

int main()
{
    int n, flag=0, cnt1=0, cnt2=0;
    scanf("%s", ch);
    scanf("%d", &n);
    while(n--)
    {
        char a, b;
        scanf(" %c%c", &a, &b);
        if(a==ch[0] && b==ch[1]) flag=1;
        if(a==ch[1]) cnt1++;
        if(b==ch[0]) cnt2++;
    }
    if(cnt1*cnt2) flag=1;
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
