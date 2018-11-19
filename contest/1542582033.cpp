#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
#define LL long long

int n, k;
int a[5];

int main()
{
    while(~scanf("%d %d", &n, &k))
    {
        vector<int> vec;
        int vis[1005];
        memset(vis, 0, sizeof(vis));
        for(int i = 0; i < n; ++i)
        {
            int temp = 0;
            for(int j = 0; j < k; ++j)
            {
                scanf("%d", &a[j]);
                int z = a[j] * (1 << (k - 1 - j));
                temp += z;
            }
            if(vis[temp] == 0)
            {
                vec.push_back(temp);
                vis[temp]++;
            }
        }
        //for(int i = 0; i < vec.size(); ++i) cout << vec[i] << endl;
        int flag = 0;
        for(int i = 0; i < vec.size(); ++i)
        {
            for(int j = 0; j < vec.size(); ++j)
            {
                if((vec[i] & vec[j]) == 0) flag = 1;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}
