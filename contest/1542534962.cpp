#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
int main() 
{
    int i,j,k,l,m,n;
    char str[3],s[107][7],tmp[7];
    scanf("%s%d",str,&n);
    for(i=1;i<=n;i++) 
        scanf("%s",s[i]);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++) 
        {
            strcpy(tmp, s[i]);
            strcat(tmp, s[j]);
            if(strstr(tmp, str)) 
                return 0*printf("YES\n");
        }
    return 0*printf("NO\n");
}