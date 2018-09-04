#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector< pair<long long int,long long int> >a;
    for(int i = 0;i < n;i++)
    {
        long long int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(), a.end());
    int j = 0;
    long long int total = 0;
    long long int c = 0;
    for(int i = 0;i<n;i++)
    {
        c += a[i].second;
        while(a[j].first + m <= a[i].first )
        {
            c-=a[j++].second;
        }
        total = max(total,c);
    }
    cout<<total;
}
