#include <cstdio>
#include <iostream>
using namespace std;
#define ref(i,x,y)for(int i=x;i<=y;++i)
char a,b,A[101],B[101];
char Read()
{
	char c=getchar();
	while(c<'a'||c>'z')c=getchar();
	return c;
}
int main()
{
	a=Read();b=Read();
	int n;scanf("%d",&n);
	bool flag=0;
	ref(i,1,n)
	{
		A[i]=Read();
		B[i]=Read();
		if(A[i]==a&&B[i]==b)flag=1;
	}
	ref(i,1,n)ref(j,1,n)if(B[i]==a&&A[j]==b)
		flag=1;
	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}