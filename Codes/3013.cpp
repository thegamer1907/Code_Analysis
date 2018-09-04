#include <bits/stdc++.h>

using namespace std;
const int Nmax = 1000000 + 5;
char C[Nmax];
int n, Z[Nmax], len;
void afis0()
{
    cout << "Just a legend";
    exit(0);
}
void zalgo()
{
    int l, r, kp ,beta;
    l = r = 1;
    Z[1] = 0;
    for(int i = 2; i <= n; ++i)
    {
        if(C[i] != C[1])
            Z[i] = 0;
        else if(i > r)
        {
            Z[i] = 1;
            while(C[i + Z[i]] == C[1 + Z[i]])
                Z[i] ++;
            l = i;
            r = i + Z[i] - 1;
        }
        else
        {
            kp = i - l + 1;
            beta = r - i + 1;
            Z[i] = min(Z[kp], beta);
            while(C[i + Z[i]] == C[1 + Z[i]])
                Z[i] ++;
            if(i + Z[i] - 1 > r)
            {
                l = i;
                r = i + Z[i] - 1;
            }
        }
    }
    Z[1] = n;
}
int main()
{
    cin >> (C + 1);
    n = strlen(C + 1);
    zalgo();
    len = -1;
    for(int i = 2; i <= n; ++i)
        if(i + Z[i] - 1 == n)
        {
            for(int j = 2; j < i; ++j)
                if(Z[j] >= Z[i])
                {
                    cout << (C + i);
                    return 0;
                }
        }
    afis0();
    return 0;
}