#include<stdio.h>
int main()
{
	__int64 n,m,p;
	while(scanf("%I64d %I64d %I64d",&n,&m,&p)!=EOF)
	{
		__int64 o=0;
		if(p==n*m){
			printf("%I64d\n",n*m);
		}
		else{
		__int64 low=1,hig=n*m,s,mid;
		while(low<hig)
		{
			o=0;
			mid=(hig+low)/2;s=0;	
			for(int i=1;i<=n;i++)
			{
				s+=(mid/i<m)?mid/i:m;
				
			}
			if(s>=p)hig=mid;
			if(s<p)low=mid+1;
		}
		if(o==0)printf("%I64d\n",hig); 
	}
	}
}
				  	 	  		 			     				 			