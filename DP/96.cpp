#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, c = 0, a[107], b[107];
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    sort(a, a+n);
    scanf("%d", &m);
    for(i=0;i<m;i++) scanf("%d", &b[i]);
    sort(b, b+m);
    for(i=0, j=0;i<n && j<m;)
    {
        if(abs(a[i]-b[j]) <= 1)
        {
            ++c;
            i++,j++;
        }
        else if(a[i]>b[j]) j++;
        else i++;
    }
    printf("%d\n", c);
    //main();
    return 0;
}
