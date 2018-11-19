#include<cstdio>
using namespace std;
const int maxn=15;
char s[maxn];
int main()
{
    int n;
    while(~scanf("%s", s))
    {
        bool flag = false;
        scanf("%d", &n);
        char one = s[0];
        char judge = s[1];
        bool tail = false;
        bool head = false;
        for(int i = 1; i <= n; i++)
        {
            scanf("%s", s);
            if(s[0] == one && s[1] == judge) flag = true;
            if(s[1] == one) tail = true;
            if(s[0] == judge) head = true;
        }
        if(head && tail) printf("YES\n");
        else if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
