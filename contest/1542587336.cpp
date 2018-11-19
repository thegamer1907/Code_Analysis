#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int a[3],t1,t2;

int in(int l,int r){
	int p=t1,q=t2;
	if (p<l) p+=60;
	if (q<l) q+=60;
	if (p<r && q<r) return 1;
	else return 0;
}


int main(void)
{
	scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&t1,&t2);
	a[0]*=5;
	if(a[1]>0||a[2]>0)++a[0];
	if(a[2]>0&&(a[1]+1)%5)++a[1];
	a[0]%=60;
	t1*=5;
	t2*=5;
	sort(a,a+3);
	if (in(a[0],a[1]) || in(a[1],a[2]) || in(a[2],a[0]+60)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
