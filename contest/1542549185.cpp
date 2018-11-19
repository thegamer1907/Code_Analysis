#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int h,m,s,t1,t2;
    int maxt,mint;
    int flag;

    while(~scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2))
    {
        flag = 0;

       maxt = max(t1,t2);
       mint = min(t1,t2);

       if(s > mint*5 && s <maxt*5)
            flag++;
       if(m >= mint*5 && m < maxt*5)
            flag++;
       if(h >= mint && h <maxt)
            flag++;

        if(flag==0 || flag == 3)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

	      				 			 	 		    		 		 	