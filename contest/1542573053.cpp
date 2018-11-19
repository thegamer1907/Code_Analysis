//A,Elebereth Gilthoniel mantae!
//For Temeria!
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<set>
#include<cstdio>
#include<map>
#include<stack>
#include<queue>
#include<cstring> 
using namespace std;
int bel1,bel2;
int main()
{
 	//freopen("","r",stdin);
	//freopen("","w",stdout);
	int h,m,s;cin>>h>>m>>s;
	if(m==0) m+=60;if(s==0) s+=60;m=m/5,s=s/5;
	int a,b;cin>>a>>b;
	if(h>m) swap(h,m);if(h>s) swap(h,s);if(m>s) swap(m,s);
	if(h>m) swap(h,m);if(h>s) swap(h,s);if(m>s) swap(m,s);
	if(h>m) swap(h,m);if(h>s) swap(h,s);if(m>s) swap(m,s);
	if(h>m) swap(h,m);if(h>s) swap(h,s);if(m>s) swap(m,s);
	if(h>m) swap(h,m);if(h>s) swap(h,s);if(m>s) swap(m,s);
	if(a>h and b>h and a<=m and b<=m) 
	{
		cout<<"YES";return 0;
	}
	if(a>m and b>m and a<=s and b<=s)
	{
		cout<<"YES";return 0;
	}
	if(a>s and b>s)
	{
		cout<<"YES";return 0;
	}
	if(a<=h and b<=h)
	{
		cout<<"YES";return 0;
	}
	if(a<=h and b>s)
	{
		cout<<"YES";return 0;
	} 
	if(b<=h and a>s)
	{
		cout<<"YES";return 0;
	}
	cout<<"NO";
	return 0;
}
