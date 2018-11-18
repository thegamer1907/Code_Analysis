#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
bool dat[16];
int main()
{
	int n,k,x;
	while(~scanf("%d%d",&n,&k))
	{
		memset(dat,0,sizeof(dat));
		for(int i=0;i<n;i++)
		{
			int cnt=0;
			for(int j=0;j<k;j++)
			{
				scanf("%d",&x);
				cnt*=2;
				cnt+=x;
			}
			dat[cnt]=1;
		}
		bool flag=false;  
        for(int i=0;i<16;i++)  
        {  
            int j;  
            for(j=0;j<16;j++)  
            {  
                if(((i&j)==0)&&dat[i]&&dat[j])  
                {  
                    flag=true;  
                    break;  
                }  
            }  
            if(j<16)break;  
        }  
        if(flag)printf("YES\n");  
        else printf("NO\n");  
	}
}