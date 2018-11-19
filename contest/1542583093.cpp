#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <fstream>
#include <map>
#include <vector>
//#include <unordered_map>
//#include <unordered_set>
#include <stack>
#include <set>
#include <queue>
#include <list>
using namespace std;
typedef long long LL;
set<int>se;
set<int>::iterator it;
int ha[100005];
int main()
{
    int n,k,f,g;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;++i)
    {
        f=0;
        for(int i=0;i<k;++i)
        {
            scanf("%d",&g);
            f<<=1;
            f+=g;
        }
        se.insert(f);
        ha[i]=f;
    }
    bool ju=false;
    for(int i=0;i<n;++i)
    {
        if(ju) break;
        for(it=se.begin();it!=se.end();++it)
        {
            if(((*it)&ha[i])==0)
            {
                ju=true;
                break;
            }
        }
    }
    if(ju) puts("YES");
    else puts("NO");
	return 0;
}
