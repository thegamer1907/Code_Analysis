#include<bits/stdc++.h>

char ss[5],s[5];
int main()
{
    while(~scanf("%s",&ss))
    {
        int n;
        bool f1=0,f2=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
            if(!strcmp(ss,s))
            {
                f1=1;f2=1;
            }
            if(s[0]==ss[1]) f1=1;
            if(s[1]==ss[0]) f2=1;
        }
        if(f1&&f2) printf("YES\n");
        else printf("NO\n");
    }
}
	    	  	  	    		   	 	 			 	