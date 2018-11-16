#include<stdio.h>
int main()
{
	int n,i,k=0,j,s=0,max=0,l,g;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=1;i<=n;i++)

		{k=0;
			while(k<=n-i)
				//for(g=0;g<n;g++)
					//a[i]=b[i];
			{for(j=k;j<k+i;j++)
				{if(a[j]==0)
					a[j]=1;
					else
						a[j]=0;}
				
					s=0;k++;
					for(l=0;l<n;l++)
						{s=s+a[l];
							a[l]=b[l];}
					if(s>max)
						max=s;
			
				}}
printf("%d",max);
return 0;}