#include <map>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define inf 0x3f3f3f3f
#define met(a,b) memset(a,b,sizeof(a))
vector<vector<int> >pp;
map<int,int>mp;


int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    vector<int>p;
    mp.clear();
    pp.clear();
    for(int i=0;i<n;i++)
    {
        int ans=0;
        p.clear();
        for(int j=0;j<k;j++)
        {
            int x;
            scanf("%d",&x);
            ans=ans*10+x;
            p.push_back(x);
        }
        if(!mp[ans])
        {
            pp.push_back(p);
            mp[ans]++;
        }
    }
    bool flag=false;
    for(int k1=0;k1<pp.size();k1++)
    {
        for(int k2=0;k2<pp.size();k2++)
        {
            flag=false;
            for(int len=0;len<k;len++)
            {
                if(pp[k1][len]==pp[k2][len]&&pp[k1][len]&&pp[k2][len])
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    
}



