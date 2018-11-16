#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>//4.10
using namespace std;
vector<long long> k;
stack<long long> kk;
stack<long long> kj;
pair<long long,long long> dp[2000009];
int main()
{
    kk.push(1);
    k.push_back(1);
    for (long long i=0; i<6; i++)
    {
        while (!kk.empty())
        {
            k.push_back(kk.top()*10+1);
            k.push_back(kk.top()*10);
            kj.push(kk.top()*10+1);
            kj.push(kk.top()*10);
            kk.pop();
        }
        while (!kj.empty())
        {
            kk.push(kj.top());
            kj.pop();
        }
    }
    sort(k.begin(),k.end());
    long long n,minn,mina;
    cin>>n;
    for (long long i=1; i<=n; i++)
    {
        minn=dp[i-1].first;
        mina=1;
        for (long long ii=1; ii<127; ii++)
        {
            if (k[ii]<=i)
            {
                if (dp[i-k[ii]].first<minn)
                {
                    minn=dp[i-k[ii]].first;
                    mina=k[ii];
                }
            }
            else
            {
                break;
            }
        }
        dp[i].first=minn+1;
        dp[i].second=mina;
    }
    cout<<dp[n].first<<endl;
    long long hala=n;
    while (hala!=0)
    {
          cout<<dp[hala].second<<' ';
          hala-=dp[hala].second;
              }
}


