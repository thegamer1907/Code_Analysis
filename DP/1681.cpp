
#include<stdio.h>
#include<string.h>
char str[100002];
char str2[100002];

int t,T,k;
int main()
{
	
	while(~scanf("%s",str))
	{
		scanf("%*c");
			T=0;
			t=0;
		
		for(int p=0;p<strlen(str);p++)
		{
			str2[p]=str[p];
		}
		for(int i=0;i<strlen(str);i++)
		{	
			
			
			
		
			if(str[i]=='A')
			{
					if(str[i+1]=='B')
					{
						t++;
						str[i+1]=' ';
						str[i]=' ';
						break;
						
					}
				
			}
			
				 	
		}
		for(int j=0;j<strlen(str);j++)
		{
			if(str[j]=='B')
			{
					if(str[j+1]=='A')
					{
						T++;
						str[j+1]=' ';
						str[j]=' ';
						break;
						
					}
				
			}
		}
		if(t>=1&&T>=1)printf("YES\n");
			else {
					t=0;
					T=0;
					for(int m=0;m<strlen(str2);m++)
				{	
			
			
			
		
					if(str2[m]=='B')
					{
							if(str2[m+1]=='A')
						{
							t++;
							str2[m+1]=' ';
							str2[m]=' ';
							break;
							
						}
				
					}
			
				 	
				}
					for(int n=0;n<strlen(str2);n++)
				{
					if(str2[n]=='A')
					{
							if(str2[n+1]=='B')
						{
							T++;
							str2[n+1]=' ';
							str2[n]=' ';
							break;
						
						}
				
					}
				}
				if(t>=1&&T>=1)printf("YES\n");
					else printf("NO\n");
				
			}
	}
	return 0;
}