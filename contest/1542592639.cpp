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
const int maxn = 110;


string words[maxn];
int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    string ans;
    bool flag = false;
    cin >> ans;
    cin >> n; 
    for(int i = 0; i < n; i++)cin >> words[i];
    for(int i = 0; i < n; i++)
    {
    	if(words[i]==ans)
    	{
    		puts("YES");
    		return 0;
    	}
    	for(int j = 0; j < n ;j++)
    	{
    		if(words[i][1]==ans[0]&&words[j][0]==ans[1])
    		{
    			flag = true;
    		}
    		if(words[j][1]==ans[0]&&words[i][0]==ans[1])
    		{
    			flag = true;
    		}
    	}
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
