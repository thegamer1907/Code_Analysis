#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 7;
int a[M];

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int res = 0;
    for(int i = 1; i <= n; i++){
        scanf("%d",a + i);
    }

    for(int i = 1; i <= n; i++)
        a[i] += a[i - 1];

    int l = 0, r = 1;

    while(r <= n){
        if((a[r] - a[l]) <= t){
            res = max(res, (r - l));
            r++;
        }
        else if(l == r)
            r++;
        else if((a[r] - a[l]) > t)
            l++;
    }

    printf("%d\n", res);

    return 0;
}
