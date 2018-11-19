#include <bits/stdc++.h>
using namespace std;
int s[20];
int main()
{
    memset(s, 0, sizeof(s));
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        int ret = 0;
        for(int j = 0; j < k; j++){
            int x; scanf("%d", &x);
            ret = (ret<<1)+x;
        }
        s[ret]=1;
    }
    bool flag = false;
    for(int i = 0; i < (1<<k); i++)
        for(int j = i+1; j < (1<<k); j++){
            if(s[i]&&s[j]&&((i&j)==0)){
                flag=true;
            }
        }
    if(s[0]||flag) puts("YES");
    else puts("NO");
    return 0;
}
