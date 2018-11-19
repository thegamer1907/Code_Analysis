
 #include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;



int a[150];
int h,m,s,t1,t2,flag,flag1,flag2;
void check1()
{
	memset(a,0,sizeof(a));
	int k=(h%12)*5+m/12;
	a[k]=1;
	a[m]=1;
	a[s]=1;
	for(int i = t1; i <=t2-1; i++) {
		if(a[i] == 1)
			flag1 = 1;
	}
}
void check2()
{
	memset(a,0,sizeof(a));
	int k=(h%12)*5+m/12;
	a[k]=1;
	a[m]=1;
	a[s]=1;
	for(int i = t2; i <=t1+60-1; i++) {
		if(a[i%60] == 1)
			flag2 = 1;
	}
}
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	//h=(h%12)*5+m/12;
	t1=(t1%12)*5;
	t2=(t2%12)*5;
	if(t1>t2)
		swap(t1,t2);
	flag1=flag2=0;
	check1();
	check2();
	if(!(flag1&&flag2))
		flag=1;
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}