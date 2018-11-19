#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pii pair<int, int>
#define mkp make_pair
#define sz(x) ((int)x.size())
#define mem(x, y) memset(x, y, sizeof(x))
#define pb push_back
map<string, int> mp;
char pas[10];
int n;

int main()
{
    scanf("%s", pas);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        char tmp[10]; scanf("%s", tmp);
        mp[tmp]++;
    }
    if(mp.count(pas)) {
        puts("YES");
        return 0;
    }
    bool F = 0, S = 0;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        string p = it->first;
        if(p[0] == pas[1]) F = 1;
        if(p[1] == pas[0]) S = 1;
    }
    puts(F && S ? "YES": "NO");
    return 0;
}
