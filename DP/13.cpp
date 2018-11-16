#include<iostream>
#include<cstdlib>
#include<utility>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
const int maxN=110;
int n,m,a[maxN][3];
int num=0;
bool book[maxN][3];

void qsort(int l,int r,int x)
{
	if(l>r)
		return;
	int t=a[rand()%(r-l+1)+l][x];
	int i=l,j=r;
	while(i<=j){
		while(a[i][x]<t)i++;
		while(a[j][x]>t)j--;
		if(i<=j){
			swap(a[i][x],a[j][x]);
			i++;
			j--;
		}
	}
	qsort(l,j,x);
	qsort(i,r,x);
}

void work()
{
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(book[j][2]==false&&(abs(a[i][1]-a[j][2])<=1)){
				book[j][2]=true;
				num++;
				break;
			}
		}
	}
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i][1];
	cin>>m;
	for(int i=1;i<=m;++i)
		cin>>a[i][2];
	srand(1000000);
	qsort(1,n,1);
	qsort(1,m,2);
	work();
	cout<<num<<endl;
	return 0;
}