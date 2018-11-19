#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

set<int> S;
vector<int> A;

int n, k;

int main()
{
    scanf("%d%d", &n, &k);

    for(int i=1; i<=n; i++)
    {
        int num = 0;
        for(int i=1; i<=k; i++)
        {
            int x;
            scanf("%d", &x);
            num *= 2;
            num += x;
        }
        S.insert(num);
    }
    for(auto i : S)
    {
        A.push_back(i);
    }
    int num = A.size();
    for(auto i : A)
    {
        if(i==0)
        {
            puts("YES");
            return 0;
        }
        for(auto j : A)
            if((i&j)==0)
            {
                puts("YES");
                return 0;
            }
    }

    puts("NO");

    return 0;
}
