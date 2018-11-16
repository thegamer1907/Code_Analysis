#include<iostream>
using namespace std;
int main()
{
	int a,b;
	unsigned char c[a+100],temp;
	cin>>a;
	cin>>b;
	cin>>c;
	for(int j=1;j<=b;j++)
	{
	for(int i=0;i<a;i++)
	{
		if(c[i]=='B'&&c[i+1]=='G'&&(i+1)<a)
		{
			temp=c[i];
			c[i]=c[i+1];
			c[i+1]=temp;
		i++;	
		}
	}
}
for(int i=0;i<a;i++)
{
	cout<<c[i];
}
return 0;
}