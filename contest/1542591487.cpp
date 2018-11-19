#include <bits/stdc++.h>
#define ll long long
#define FOR(i,x,y) for(int i = x; i <= y; ++i)
#define rFOR(i,x,y) for(int i = x; i >= y; --i)
#define MS(a,x) memset(a,x,sizeof a)
#define pb push_back
using namespace std;

const int MAXN = 1e6 + 7;

char key[3];
char tp[3];
int n;
int pre[30];
int suf[30];

int main()
{
    scanf("%s",key);
    scanf("%d",&n);
    bool ans = false;
    FOR(i,0,n - 1)
    {
        scanf("%s",tp);
        if(tp[0] == key[0] && tp[1] == key[1]) ans = true;
        pre[tp[0] - 'a'] = 1;
        suf[tp[1] - 'a'] = 1;
    }
    if(pre[key[1] - 'a'] && suf[key[0] - 'a']) ans = true;
    if(ans) printf("YES\n");
    else printf("NO\n");


    return 0;
}
