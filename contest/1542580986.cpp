#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
inline int read()
{
	char c=getchar(); int num=0,f=1;
	while (c<'0'||c>'9') { if (c=='-') f=-1; c=getchar(); }
	while (c<='9'&&c>='0') { num=num*10+c-'0'; c=getchar(); }
	return num*f;
}
int n,k,num[20];
int main()
{
	n=read(); k=read();
	for (int i=1;i<=n;i++)
	{
		int x,now=0;
		for (int j=1;j<=k;j++)
		{
			x=read();
			now=now*2+x;
		}
		num[now]++;
	}
	if (num[0]) {cout<<"YES"; return 0;}
	if (num[1]&&(num[4]||num[2]||num[6]||num[8]||num[10]||num[12]||num[14])) {cout<<"YES"; return 0;}
	if (num[2]&&(num[4]||num[5]||num[9]||num[8]||num[12]||num[13])) {cout<<"YES"; return 0;}
	if (num[3]&&(num[4]||num[8]||num[12])) {cout<<"YES"; return 0;}
	if (num[4]&&(num[11]||num[10]||num[9]||num[8])) {cout<<"YES"; return 0;}
	if (num[5]&&(num[8]||num[10])) {cout<<"YES"; return 0;}
	if (num[6]&&(num[9]||num[8])) {cout<<"YES"; return 0;}
	if (num[7]&&(num[8])) {cout<<"YES"; return 0;}
	cout<<"NO";
	return 0;
}