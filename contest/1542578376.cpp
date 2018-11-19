#include <bits/stdc++.h>
using namespace std;
#define eps 1e-8
#define INF 0x3f3f3f3f
#define maxn 100005
#define LL long long
int n,k;
int mp[maxn][6];
vector<int> v;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
            scanf("%d",&mp[i][j]);
    }
    multiset<int> st;
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=k;j++)
            cnt+=((1<<(j-1))*mp[i][j]);
        st.insert(cnt);
        v.push_back(cnt);
    }
    if(st.count(0))
    {
        printf("YES\n");
        return 0;
    }
    for(int i=0;i<v.size();i++)
    {
        int now=v[i];
        st.erase(st.find(now));
        for(int j=0;j<=16;j++)
        {
            if((now&j)==0&&st.count(j))
            {
                printf("YES\n");
                return 0;
            }
        }
        st.insert(now);
    }
    printf("NO\n");
    return 0;
}
