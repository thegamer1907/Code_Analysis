#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<math.h>
#include<bitset>
#include<sstream>
#include <stdio.h> 
#include <iomanip>
#include<queue>
using namespace std;
void in_out_txt()
{
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
}
//int asd[100010],k,n,m,d;
//int mem[10010][110][11];
//int fun(int x)
//{
//	return (x%k+k)%k;
//}
//int dp(int i,int sum,int u)
//{
//	int &ret=mem[i][sum][u];
//	if(ret !=-1)
//		return ret;
//	if(i==m&&sum==k)
//		return ret=sum;
//	if((i==m&&sum!=k)||sum<0)
//		return ret=-2;
//	for(int h=0;h<=d;h++)
//		ret=max(ret,max(dp(i+1,sum+h,h),dp(i+1,sum-h,h)));
//	ret+=sum;
//	return ret;
//}
//void fill1()
//{
//	for(int i=0;i<10010;i++)
//		for(int j=0;j<110;j++)
//			for(int h=0;h<11;h++)
//			    mem[i][j][h]=-1;
//}
void ff()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
int main()
{
	//in_out_txt();
	ff();
	int n;
	string s,c="";
	cin>>s>>n;
	string asd[111];
	for(int i=0;i<n;i++)
		cin>>asd[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			c=asd[i][1];
			c+=asd[j][0];
			if(c==s||s==asd[j]||s==asd[i])
			{
				cout<<"YES\n";
				return 0;
			}
			c=asd[j][1];
			c+=asd[i][0];
			if(c==s)
			{
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}