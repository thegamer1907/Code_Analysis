#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long
#define maxn 5
float a[maxn];
int main()
{
    int aa,b,c,t1,t2;
    int mark1,mark11,mark2,mark22;
    while(~scanf("%d %d %d %d %d",&aa,&b,&c,&t1,&t2))
    {
        a[0]=(float)(t2*5);
        a[1]=(float)(t1*5);
        a[2]=(float)c;
        if(c==0)
            a[3]=(float)b;
        else
            a[3]=(float)(b+0.1);
        if(b==0&&c==0)
            a[4]=(float)aa*5;
        else
            a[4]=(float)(aa*5+0.1);
        sort(a,a+5);
//        for(int i=0;i<5;i++)
//            printf("%f ",a[i]);
//        printf("\n");
        bool flag1=false,flag2=false;
        for(int i=0;i<5;i++)
        {
            if(a[i]==t1*5&&!flag1)
            {
                mark1=i;
                flag1=true;
            }
            if(a[i]==t2*5&&!flag2)
            {
                mark2=i;
                flag2=true;
            }
        }
        mark11=mark1;
        while(mark11<4&&a[mark11+1]==a[mark1])
            mark11++;
        mark22=mark2;
        while(mark22<4&&a[mark22+1]==a[mark2])
            mark22++;
//        printf("#%d %d\n",mark1,mark2);
//        printf("#%d %d\n",mark11,mark22);
        if(mark1==mark2+1||mark2==mark1+1||(mark1==4&&mark2==0)||(mark1==0&&mark2==4))
            printf("YES\n");
        else if(mark1==mark22+1||mark22==mark1+1||(mark1==4&&mark22==0)||(mark1==0&&mark22==4))
            printf("YES\n");
        else if(mark11==mark2+1||mark2==mark11+1||(mark11==4&&mark2==0)||(mark11==0&&mark2==4))
            printf("YES\n");
        else if(mark11==mark22+1||mark22==mark11+1||(mark11==4&&mark22==0)||(mark11==0&&mark22==4))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
