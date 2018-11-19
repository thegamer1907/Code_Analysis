#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
/*char c[100][2];
using namespace std;
int main()
{
	char s[2];
	int n;
	scanf("%s",s);
	int numx,numy;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",c[i]);
		if(c[i][0]==s[0])
		{
			numx=i;
			numy=0;
		}
		if(c[i][1]==s[0])
		{
			numx=i;
			numy=1;
		}
	}
	int flag=0;
	if(numy==0)
	{
		if(c[numx][numy+1]==s[1])
		flag=1;
	}
	if(numy==1)
	{
		for(int i=0;i<n;i++)
		{
			if(c[i][0]==s[1])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	printf("Yes\n");
	else
	printf("No\n");

	return 0;
}
*/
char s[201],words[201][201];
  int n,flag;
  int main()
  {
  int i,j;
   cin>>s;
   cin>>n;
   for (i=1;i<=n;i++)
     {
       cin>>words[i];
     }
   flag=0;
   for (i=1;i<=n;i++)
     {
       int p=strcmp(words[i],s);
       if (p==0)
     {
       flag=1;
       break;
     }
       for (j=1;j<=n;j++)
     {
       if (words[i][1]==s[0]&&words[j][0]==s[1])
         {
           flag=1;
           break;
         }
     }
     }
   if (flag)
     cout<<"YES\n";
   else cout<<"NO\n";
 }
