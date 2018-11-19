#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char ans[4], tmp[4];

int main(void)
{
    while(cin >> ans)
    {
        int n;
        scanf("%d", &n);
        int s = 0, e = 0;
        int ok = 0;
        for(int i = 1; i <= n; i++)
        {
            scanf(" %s", tmp);
            if(tmp[0] == ans[0] && tmp[1] == ans[1])
                ok = 1;
            else
            {
                if(tmp[0] == ans[1]) e = 1;
                if(tmp[1] == ans[0]) s = 1;
            }
        }
        if(ok || (s==1&&e==1)) puts("YES");
        else puts("NO");
    }
    return 0;
}
