#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<cmath>
#define f(x) ((x)-'a')

using namespace std;

bool a[26][26],b[26],c[26];
int x,y;

int main()
{
	char ch[2];
	cin>>ch[0]>>ch[1];
	x=f(ch[0]),y=f(ch[1]);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ch[0]>>ch[1];
		a[f(ch[0])][f(ch[1])]=1;
		b[f(ch[0])]=c[f(ch[1])]=1;
	}
	cout<<((a[x][y]||(b[y]&&c[x]))?"YES":"NO");
}
