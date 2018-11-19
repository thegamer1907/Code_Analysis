#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=20,M=3e6,inf=0x3f3f3f3f;
int h,m,s,a,b;
int block[N],block_mid[N];//[i,i+1]
int fix(int x)
{
	if(x>12)
		x-=12;
	if(x<=0)
		x+=12;
	return x;
}
bool check(int a,int b)
{
	for(int i=a;i!=b;i=fix(i+1))
	{
		//i->i+1
		if(block_mid[i])
			return false;
		if(block[fix(i+1)]||block[i])
			return false;
	}
	return true;
}
int main()
{
	cin>>h>>m>>s;
	if(m==0&&s==0)
		block[h]=1;
	else
		block_mid[h]=1;
	if(m%5==0 && s==0)
		block[fix(m/5)]=1;
	else 
		block_mid[fix(m/5)]=1;
	if(s%5)
		block_mid[fix(s/5)]=1;
	else
		block[fix(s/5)]=1;
	cin>>a>>b;
	bool mk=check(a,b);
	swap(a,b);
	bool mk2=check(a,b),flag=false;
	//cout<<mk<<' '<<mk2<<endl;
	if(mk||mk2)
		flag=true;
	if(flag)
		puts("YES");
	else
		puts("NO");
	return 0;
}