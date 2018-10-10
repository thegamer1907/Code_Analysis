#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef  vector<double> VI ;

int main()
{
    double n,l;
    cin>>n>>l;
    VI lol;
    for(int i = 0; i < n; i++)
    {
        double p;
        cin>>p;
        lol.push_back(p);

    }
    sort(lol.begin(),lol.end());
    VI distance;
    for(int i = 1; i < n; i++)
    {
        double p =(lol[i]-lol[i-1])/2;
        distance.push_back(p);

    }
    if(lol[0]!=0)
    {
        distance.push_back(lol[0]);
    }
    if(lol[n-1]!=l)
    {
        distance.push_back(abs(lol[n-1] - l));
    }
    double ans = 0;
    for(int i = 0; i < distance.size(); i++)
    {
        ans = max(ans,distance[i]);

    }
    printf("%0.7f", ans);
    return 0;
}
