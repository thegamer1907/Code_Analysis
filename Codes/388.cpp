#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

using namespace std;
const int maxn=10001;
int main()
{
    int i,cnt,t[maxn];
    cnt=1;
    t[1] = 19;
        for(i=20;cnt<=maxn;i++)
        {
            int s,a,b;
            s=0,a=i;
            while(a)
            {
                b=a%10;
                a/=10;
                s+=b;
                if(b>10)
                break;
            }
            if(s==10)
                t[++cnt]=i;
        }
    //for(i=1;i<=maxn;i++)
      //  printf("%d ",t[i]);
      int k;
    while(scanf("%d",&k)==1)
    {
        printf("%d\n",t[k]);
    }
    return 0;
}

 		 	 	  	 		 		 	    	 	 	 	 	