/// #bettercoderthanshebeautiful
/// Now on codeforces too
#include<bits/stdc++.h>
using namespace std;
long long n,d;
struct WhoLovesHer
{
    long long cash,ff;
};
WhoLovesHer v[100002];
bool test(WhoLovesHer a, WhoLovesHer b)
{
    return a.cash<b.cash;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>d;
    for(int i=1;i<=n;++i)
        cin>>v[i].cash>>v[i].ff;
    sort(v+1,v+n+1,test);
    long long sum=0;
    long long summax=0;
    int st=1;
    int sf=1;
    while(sf<=n)
    {
        while(sf<=n && v[sf].cash-v[st].cash<d)
            sum+=v[sf].ff,++sf;
        summax=max(summax,sum);
        if(sf>n)
            break;
        while(v[sf].cash-v[st].cash>=d)
            sum-=v[st].ff,++st;
    }
    cout<<summax;
    return 0;
}
