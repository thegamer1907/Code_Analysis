#include<queue>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int main()
{
    char t[3],s[3];
    while(~scanf("%s",t)){
        scanf("%d",&n);
        bool flag1=0,flag2=0;
        while(n--){
            scanf("%s",s);
            if(s[0]==t[0]&&s[1]==t[1])
                flag1=1,flag2=1;
            if(s[0]==t[1])
                flag1=1;
            if(s[1]==t[0])
                flag2=1;
        }
        if(flag1&&flag2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
