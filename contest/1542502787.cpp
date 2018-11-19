#include<cstdio>
#include<algorithm>
using namespace std;

char s[110];

int main(){
    int n;
    bool ok = 0, flag = 0;
    scanf("%s%d", s, &n);
    for (int i = 0; i < n; i++){
        char c[5];
        scanf("%s", c);
        if (c[0] == s[1]) ok = 1;
        if (c[1] == s[0]) flag = 1;
        if (c[0] == s[0] && c[1] == s[1]) ok = flag = 1;
    }
    if (ok && flag) printf("YES\n");
    else printf("NO\n");
	return 0;
}
