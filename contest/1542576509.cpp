#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include  <string>
using namespace std;
char s[2];
int main()
{
    char an[2];
    while(scanf( " %s",an)!=EOF)
    {
        int  ai=0,aj=0,n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf(" %s",s);
            if(s[0]==an[0]&&s[1]==an[1]){
                ai=1;aj=1;
            }
            if(s[1]==an[0])
                ai=1;
            if(s[0]==an[1])
                aj=1;
        }
        if(ai&&aj){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
