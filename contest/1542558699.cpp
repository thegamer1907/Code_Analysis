#define _CRT_SECURE_nO_WARnInGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <set>
#include <cstring>
using namespace std;
const int N = 1000*1000+7;
map<vector<int>,int> mp;
vector<int> g[N];
int k;
vector<int> F(int n)
{
    vector<int> ans;
    while(n!=0){
        ans.push_back(n%2);
        n/=2;
    }
    while(ans.size()<k) ans.push_back(0);
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{

//	   freopen("yinyang.in","r",stdin);
//	   freopen("yinyang.out","w",stdout);
    int n;
    cin>>n>>k;
    for(int i = 0;i<n;i++)
    {
        int y = 0;
        for(int j = 0;j<k;j++)
        {
            int x;
            scanf("%d",&x);
            g[i].push_back(x);
            y+=x;
        }
        if(y == 0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        mp[g[i]]++;

    }
    vector<vector<int> > all;
    for(int i = 0;i<=16;i++)
    {
        all.push_back(F(i));
    }
    for(int i = 0;i<all.size();i++)
    {
        for(int j = 0;j<all.size();j++)
        {
            if(!mp[all[i]] || !mp[all[j]]) continue;
            if(i == j) continue;
            bool f = true;
            for(int u = 0;u<k;u++)
            {
                if(all[i][u]+all[j][u] == 2) f = false;
            }
            if(f)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
	return 0;
}
