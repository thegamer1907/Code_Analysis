#include <cstdio>
#include <iostream>
using namespace std;
 
int main()
{
	int n;	cin>>n;
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++)
	{
		int xx,yy,zz;
		scanf("%d%d%d",&xx,&yy,&zz);
		x+=xx,y+=yy,z+=zz;
	} 
	cout<<(x==0&&y==0&&z==0?"YES":"NO");
	return 0;
}

