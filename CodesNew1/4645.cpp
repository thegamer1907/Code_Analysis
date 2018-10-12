#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

 int f[500050];

int main()
{  
int i,n;

scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&f[i]);
}


sort(f+1,f+n+1);
 


int p_n=n;

for (i=n/2;i>=1;i--)
{
  if (f[i]*2<=f[p_n] )
  {
	  p_n--;
  }
}

printf("%d\n",p_n);

	return 0;
	
}	 