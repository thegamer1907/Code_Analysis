

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<cmath>
#include<vector>
#define read(a) scanf("%d",&a)
#define MEM(a) memset(a,0,sizeof(a))
#define MEM_MAX(a) memset(a,0x3f,sizof(a))
#define FOR(i,n) for(int i=0;i<n;++i)
#define FORE(i,n) for(int i=1;i<=n;++i)
using namespace std;
const int inf= 214748364;
const int maxn=1e7+10;
const int mod=1e9+7;
typedef long long ll;

char pass[5];

int main()
{
    int n;
    int flag=0,flag1=0,flag2=0;
    scanf("%s",&pass);
    scanf("%d",&n);
    char a,b;
    FOR(i,n)
    {
        char temp[5];
        scanf("%s",temp);
        if(strcmp(temp,pass)==0)
            flag=1;
        else
        {
            if(temp[0]==pass[1])
                flag1=1;
            if(temp[1]==pass[0])
                flag2=1;
            if(flag1==1&&flag2==1)
                flag=1;
        }
       // printf("%c %c\n",temp[0],temp[1]);
        //printf("%c %c\n",pass[0],pass[1]);
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}




