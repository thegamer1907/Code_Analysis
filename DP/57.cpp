#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, a = 0, coun = 0;

    scanf("%d", &n);

    int b[n];

    for(i = 0; i < n; i++) scanf("%d", &b[i]);

    scanf("%d", &m);

    int g[m];

    for(i = 0; i < m; i++) scanf("%d", &g[i]);

    sort(b, b + n);
    sort(g, g + m);

    for(i = 0; i < m; i++)
    {
        if(b[a] == g[i])
        {
            if(a == (n - 1))
            {
                coun++;
                break;
            }
            //cout << b[a] << " " << g[i] << endl;
            coun++;
            a++;
        }
        else if(abs(b[a] - g[i]) == 1)
        {
            if(a == (n - 1))
            {
                coun++;
                break;
            }
            //cout << b[a] << " " << g[i] << endl;
            coun++;
            a++;
        }
        /*else if((b[a] - g[i]) >1)
        {
            if(a == (n - 1)) break;
            cout << b[a] << " " << g[i] << endl;
        }*/
        else if((g[i] - b[a]) > 1)
        {
            if(a == (n - 1)) break;
            a++;
            i -= 1;
            //cout << b[a] << " " << g[i] << endl;
        }
        else continue;
    }
    printf("%d\n", coun);

    return 0;
}
