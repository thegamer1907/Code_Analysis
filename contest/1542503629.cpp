#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<map>
using namespace std;
typedef long long LL;
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
const int maxn = 100000+10;
const LL mod = 1000000007;
char s[5];
char p[105][5];
int main() {

    int n;
    scanf("%s%d",s,&n);
    for (int i=1;i<=n;++i) {
        scanf("%s",p[i]);
    }
    int flag=0;
    for (int i=1;i<=n&&!flag;++i) {
        if (p[i][0]==s[0]&&p[i][1]==s[1]) {
            flag=1;
            break;
        }
        if (p[i][0]==s[1]&&p[i][1]==s[0]) {
            flag=1;
            break;
        }
    }
    for (int i=1;i<=n&&!flag;++i) {
        for (int j=1;j<=n&&!flag;++j) {
            if (i==j) {
                continue;
            }
            if (p[i][1]==s[0]&&p[j][0]==s[1]) {
                flag=1;
                break;
            }
            if (p[j][1]==s[0]&&p[i][0]==s[1]) {
                flag=1;
                break;
            }
        }
    }
    puts(flag?"YES":"NO");
    return 0;
}
