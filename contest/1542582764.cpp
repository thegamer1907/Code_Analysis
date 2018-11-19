#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;
#define INF 0x3f3f3f3f
#define LL long long
#define fi first
#define se second
#define mem(a,b) memset((a),(b),sizeof(a))
#define sqr(x) ((x)*(x))

int N, K;
int num[20];

int main()
{
    scanf("%d%d", &N, &K);
    for(int i=0;i<N;++i)
    {
        int x=0;
        for(int j=0;j<K;++j)
        {
            int tmp;
            scanf("%d", &tmp);
            x<<=1;
            x|=tmp;
        }
        ++num[x];
//        cerr<<"x: "<<x<<endl;
    }
//    cerr<<"read finish"<<endl;
    int S=(1<<K);
    for(int i=0;i<S;++i)
        for(int j=0;j<S;++j)
            if(num[i] && num[j] && (i&j)==0)
            {
                puts("YES");
                return 0;
            }
    puts("NO");
    
    return 0;
}