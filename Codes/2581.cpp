using namespace std;
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
const int A = 1e7 + 10;
const int N = 1e6 + 50;
int sp[A + 5], s[A + 5];
int n, x, q;
bool v[A+ 5];
void Sieve()
{
    sp[1] = 1;
    for (int i = 2; i <= A; i += 2) sp[i] = 2, v[i] = 1;

    for (int i = 3; i <= A; i += 2)
        if (!v[i])
    for (int j = i; j <= A; j += i) if (!v[j]) sp[j] = i, v[j] =1;
    //cout << "ok" << endl;
}
int main()
{
    //freopen("in.txt","r",stdin);
    memset(v, 0, sizeof(v));
    memset(s, 0, sizeof(s));
    Sieve();
    //for (int i = 2; i <= 100; i++) cout << i << " " << sp[i] << endl;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d", &x);
        while (x > 1)
        {
            int tmp = sp[x];
            s[sp[x]] ++;
            while( ((x % tmp) == 0) && x>1) x = x/tmp;
        }
    }
    for (int i = 2; i <= A; i++) s[i] += s[i-1];
    scanf("%d",&q);
    while (q--)
    {
        int l, r;
        scanf("%d %d", &l ,&r);
        if (r > A) r = A;
        if (l > A) l = A;
        printf("%d\n",s[r] - s[l-1]);
    }
}
/*using namespace std;

int main()
{
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        int j = 2;
        while (x>0)
        {
            while (x % j == 0) x/= j, s[j] ++;
            if (j > sqrt(x)) s[x] ++, break;
            else j++;
        }
    }
    for (int i = 1; i <= maxs; i++) s[i] += s[i-1];
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d %d",&l ,&r);
        if (r > maxs) r = maxs;
        cout << s[r]- s[l-1] << endl;
    }
}
*/
