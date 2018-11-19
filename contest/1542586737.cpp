#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stack>
#include <queue>

using namespace std;
#define Fill(a, b) memset(a, b, sizeof(a))
#define Debug(x) cout << #x << "=" << (x) << endl;
typedef long long LL;
const LL inf = 1LL << 61;
const LL mod = 1000000007;
#define DEBUG
#ifdef DEBUG
#endif

bool vis[125];
int main()
{
    std::ios::sync_with_stdio(false);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    Fill(vis, 0);
    h = h*5*2%120;
    m = m*2;
    s = s*2;
    //cout << h << ' ' << m << ' ' << s << endl;
    if(m||s)h++;
    if(s)m++;
    //cout << h << ' ' << m << ' ' << s << endl;
    vis[h] = vis[m] = vis[s] = true;
    t1 = t1*5*2%120;
    t2 = t2*5*2%120;
    //cout << t1 << " " << t2 << endl;
    bool flag = true;
    for(int i = t1; ; i++)
    {
    	int j = i%120;
    	if(vis[j])
    	{
    		flag = false;
    		break;
    	}
    	if(j==t2)break;
    }
    if(flag)
    {
    	puts("YES");
    	return 0;
    }
    flag = true;
    for(int i = t1; ; i--)
    {
    	int j = (i+120)%120;
    	if(vis[j])
    	{
    		flag = false;
    		break;
    	}
    	if(j==t2)
    	break;
    }
    if(flag)
    {
    	puts("YES");
    }
    else
    {
    	puts("NO");
    }























    return 0;
}
