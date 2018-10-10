#include <bits/stdc++.h>
using namespace std;
int n,k;
map<long long,vector<int> > repArr;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<long long> num(n);
    for(int i = 0;i < n;i++)
        scanf("%lld",&num[i]),repArr[num[i]].push_back(i);
    long long ans = 0;
    for(int i = 0;i < n;i++)
    {
        if(num[i] % k == 0)
        {
            long long l1 = num[i] / k;
            long long l2 = num[i] * k * 1LL;
            long long firstBound = lower_bound(repArr[l1].begin(),repArr[l1].end(),i) - repArr[l1].begin();
            long long secondBound = repArr[l2].end() - lower_bound(repArr[l2].begin(),repArr[l2].end(),i+1);
            //cout << firstBound << " " << secondBound << endl;
            ans += firstBound*secondBound;
        }
    }
    cout << ans;
    return 0;
}
