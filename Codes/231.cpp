// First, we will build the prefix sum array.
// Then, we will run a binary search on this array to find position of q_i'th worm for all q_i.
// Again, pen and paper will help you understand how this solution works.

#include<bits/stdc++.h>
using namespace std;

int prefix[100005];

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int a_i;
        scanf("%d", &a_i);
        prefix[i] = prefix[i-1]+a_i;
    }

    int m;
    scanf("%d", &m);

    while(m--)
    {
        int q_i, ans;
        scanf("%d", &q_i);
        ans = lower_bound(prefix, prefix+n+1, q_i)-prefix;
        printf("%d\n", ans);
    }
    return 0;
}
