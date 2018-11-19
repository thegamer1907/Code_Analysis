#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a,b;
int main()
{
scanf("%c%c",&a,&b);

        int n;
        scanf("%d",&n);
        bool have=false;
        int z=0,x=0;
        for(int i=0;i<n;i++)
        {
            getchar();
            char n1,n2;
            scanf("%c%c",&n1,&n2);
            if(n1==a&&n2==b)
                have=true;
            else
            {
                if(n1==b)
                    x=1;
                if(n2==a)
                    z=1;
            }
        }
        if(have||(x==1&&z==1))
            printf("YES\n");
        else
            printf("NO\n");
            return 0;
}























