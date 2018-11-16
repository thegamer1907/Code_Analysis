#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    int contestants[51];
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &contestants[i]);
    }

    int standard = contestants[k];
    int advanceNumber = 0;
    for(int i = 1; i <= n ; i++)
    {
        if(contestants[i] > 0)
            if(contestants[i] >= standard)
                advanceNumber++;
    }

    printf("%d", advanceNumber);

    return 0;
}
