#include <bits/stdc++.h>
using namespace std;
string  s[105];
int main()
{
    cin >> s[0];
    int n; cin >> n;
    bool fg, hd, tl;
    fg=hd=tl=0;
    for(int i = 1; i <= n; i++){
            cin >> s[i];
            if(s[i]==s[0]) fg=1;
            if(s[i][0] == s[0][1]) hd=1;
            if(s[i][1] == s[0][0]) tl=1;
    }
    if(fg||hd&&tl) puts("YES");
    else puts("NO");
    return 0;
}
