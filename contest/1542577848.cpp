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
const int maxn = 1e5+10;


int arr[maxn][4];
int sum[20];
int main()
{
    std::ios::sync_with_stdio(false);
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < k; j++)
    	{
    		scanf("%d", &arr[i][j]);
    	}
    }
    Fill(sum, 0);
    for(int i = 0; i < n; i++)
    {
    	int base = 1, p = 0;
    	for(int j = 0; j < k; j++)
    	{
    		if(arr[i][j])
    		{
    			p += base;
    		}
    		base = base*2;
    	}
    	sum[p]++;
    }
    if(sum[0])
    {
    	puts("YES");
    	return 0;
    }
    for(int i = 0; i < (1<<16); i++)
    {
    	int s = 0;
    	for(int j = 0; j < 16; j++)
    	{
    		if(i&(1<<j))s++;
    	}
    	if(s!=2)continue;
    	vector<int> vec;
    	for(int j = 0; j < 16; j++)
    	{
    		if(i&(1<<j))
    		{
    			vec.push_back(j);
    		}
    	}
    	if(vec[0]&vec[1])continue;
    	if(sum[vec[0]]&&sum[vec[1]])
    	{
    		puts("YES");
    		return 0;
    	}
    }
    puts("NO");























    return 0;
}
