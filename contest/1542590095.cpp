#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool ok=false;
    bool ok1=false;
    bool ok2=false;
    for(int i=1;i<=n;i++)
    {
        string tmp;
        cin >> tmp;
        if(tmp[0]==s[0]&&tmp[1]==s[1])
        {
            ok=true;
            continue;
        }
        if(tmp[0]==s[1]&&tmp[1]==s[0])
        {
            ok=true;
            continue;
        }
        if(tmp[1]==s[0]&&tmp[0]!=s[1])
        {
            ok1=true; continue;
        }
        if(tmp[0]==s[1]&&tmp[1]!=s[0])
        {
            ok2=true; continue;
        }
    }
    if(ok) {puts("YES");return 0;}
    if(ok1&&ok2) {puts("YES");return 0;}
    cout << "NO" << endl;
    return 0;
}
