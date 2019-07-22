#define _CRT_SECURE_NO_DEPRECATE
#include<iostream> 
#include<algorithm>
#include<cstring>
#include<sstream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
long long n;
long long   m, k, t,j,num;
long long  a[100005];
long long  b[100005];
int vis[100005];
void sub(int tt)
{
	for (int i = j; i < m; i++)
	{
		if (b[i] - k >= b[j]) break;
		if(!vis[i])
		 a[i] -= num;
		else a[i]-=tt;
		vis[i]=1;
		if((a[i]-1)/k!=(a[j]-1)/k) break;
	}
}
int main()
{	
//	freopen("1.txt","r",stdin);
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) 
	{
		scanf("%I64d", a + i);
		b[i]=a[i];
	}
	while (j < m)
	{
	//	if(t>89000)
//		cout<<t<<endl;
		num++;
		int tt=1;
		n = (a[j]-1) / k;
		int i;
		for (i = j+1; i < m; i++)
		{
			if ((a[i] - 1) / k > n)
			{
				j = i; break;
			}
			num++;
			tt++;
		}
		if (i >= m) j = m;
		t++;
		sub(tt);

	}
	cout << t << endl;
	return 0;
}