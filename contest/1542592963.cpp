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

const int MAXN=100+3;
string ans, s[MAXN];

int main()
{
    cin>>ans;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;++i)
    {
        cin>>s[i];
    }
    bool ok=false;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
        {
            if(s[i]==ans || s[j]==ans || s[i][1]==ans[0] && s[j][0]==ans[1] || s[j][1]==ans[0] && s[i][0]==ans[1])
            {
                ok=true;
                break;
            }
        }
    puts(ok?"YES":"NO");
    
    return 0;
}