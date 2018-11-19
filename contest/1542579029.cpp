#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h*=5;
    t1*=5;
    t2*=5;
    if(h==60)h-=60;
    if(t1==60)t1-=60;
    if(t2==60)t2-=60;

    vector<pair<double,int>> v;
    v.push_back(make_pair(t1,3));
    v.push_back(make_pair(t2,4));
    v.push_back(make_pair(t1-60,3));
    v.push_back(make_pair(t2-60,4));
    v.push_back(make_pair(h+(m/60)+(s/3600),0));
    v.push_back(make_pair(h+(m/60)+(s/3600)-60,0));

    v.push_back(make_pair(m+(s/60),1));
    v.push_back(make_pair(m+(s/60)-60,1));

    v.push_back(make_pair(s,2));
    v.push_back(make_pair(s-60,2));
    sort(v.begin(),v.end());
    int sz = v.size();
    for(int i=0; i<sz; i++)
    {
        if(v[i].second==3)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(v[j].second<=2)break;
                else if(v[j].second==4)
                {
                    printf("YES");
                    return 0;
                }
            }
            for(int j=i+1; j<sz; j++)
            {
                if(v[j].second<=2)break;
                else if(v[j].second==4)
                {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
    return 0;
}
