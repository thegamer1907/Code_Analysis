#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include  <string>
using namespace std;

int main()
{
    int h,m,s,t1,t2;
    int him[13][2];
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
    {
        int as=0;
        memset(him,0,sizeof(him));
        him[h][0]=1;
        if(m+s>0)
            him[h][1]=1;
        him[m/5 ? m/5 : 12][0]=1;
        if(m/5*5<m||s>0)
            him[m/5 ? m/5 : 12][1]=1;
        him[s/5?s/5:12][0]=1;
        if(s/5*5<s)
            him[s/5?s/5:12][1]=1;
        for(int i=t1;i<=12;i++){
            if(i==t2)
            {
                as=1;break;
            }
            if(him[i][0])
                break;
            if(i==12)
                i=0;
        }
        for(int i=t1;i>0;i--){
            if(i==t2){
        
                as=1;break;
            }
            if((him[i>1 ? i-1 : 12][1]||him[i][0])&&i!=t1)
                break;
            if(i==1)
                i=13;
        }

        if(as)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
