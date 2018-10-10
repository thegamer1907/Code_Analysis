#include <iostream>
#include <set>
#include <vector>
#include <map>

using namespace std;

const int N = 10000000;
int lp[N+1];
vector<int> pr;
vector<pair<int,int> > ps;
map<int,int> f;

int main()
{
    for (int i=2; i<=N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        int d;
        while(d=lp[a])
        {
            f[d]++;
            while(a%d==0){a/=d;}
        }
    }
    int sum=0;
    ps.push_back({-1,0});
    for (auto &p:f)
    {
        sum+=p.second;
        ps.push_back({p.first,sum});
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int l,r;
        scanf("%d",&l);
        scanf("%d",&r);
        auto itl= lower_bound(ps.begin(),ps.end(),make_pair(l,0))-1;
        auto itr= lower_bound(ps.begin(),ps.end(),make_pair(r+1,0))-1;
        //cout << itl-ps.begin() << ' ' << itr-ps.begin() << endl;
        printf("%d\n",itr->second-itl->second);
    }
    return 0;
}
