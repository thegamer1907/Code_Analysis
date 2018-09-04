#include<iostream>
#include<algorithm>

struct Node
{
    int m, s;
};

bool cmp(Node a, Node b) 
{
    return a.m < b.m;
}

int main()
{
    int n, d;
    Node p[100001];
    scanf("%d %d", &n, &d);
    for(int i=0;i<n;i++)
        scanf("%d %d", &p[i].m, &p[i].s);
    std::sort(p, p+n, cmp);
    
    p[n].m = 2e9 + 7;
    long long cur = 0, ans = 0;
    int l = 0, r = 0;
    for(;r <= n;r++)
    {
        if(p[r].m - p[l].m >= d)
        {
            ans = std::max(ans, cur);
            while(l < r)
            {
                if(p[r].m - p[l].m < d)
                    break;
                cur -= p[l].s;
                l++;
            }
        }
        cur += p[r].s;
    }
    printf("%lld\n", ans);
}
