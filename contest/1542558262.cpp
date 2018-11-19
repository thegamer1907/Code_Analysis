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
	int h,m,s,t1,t2,sum=0,v,b,asd[15]={0};
	cin>>h>>m>>s>>t1>>t2;
	h%=12;
	m/=5;
	s/=5;
	for(int i=1;i<=12;i++)
		asd[i]=(asd[i-1]+(i==h+1)+(i==m+1)+(i==s+1));
	if((asd[t1]%3)==(asd[t2]%3))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}