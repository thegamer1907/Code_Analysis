#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char ll,rr;
int n;
bool ok,ok1,ok2;
struct word{
	char a,b;
}mem[110];
int main()
{
	cin>>ll>>rr;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>mem[i].a>>mem[i].b;if(mem[i].a==ll&&mem[i].b==rr)ok=1;
		if(mem[i].b==ll)ok1=1;
		if(mem[i].a==rr)ok2=1;
		if(ok1==1&&ok2==1)ok=1;	
	}
	if(ok==1)cout<<"YES";
	else cout<<"NO";
	return 0;
}