#include <bits/stdc++.h>
using namespace std;
int n,k;
int arr[16];
int arcacs[16][4]={{0,0,0,0},{1,0,0,0},{0,1,0,0},{1,1,0,0},\
		   {0,0,1,0},{1,0,1,0},{0,1,1,0},{1,1,1,0},\
                   {0,0,0,1},{1,0,0,1},{0,1,0,1},{1,1,0,1},\
		   {0,0,1,1},{1,0,1,1},{0,1,1,1},{1,1,1,1}};
bool can(int *a,int m)
{
    if(m==0) return false;
    for(int i=0;i<k;i++)
	if(a[i]>m/2)
	    return false;
    return true;
}
bool f(int x,int *a,int m)
{
    if(can(a,m)) return true;
    if(x==1<<k) return false;
    if(f(x+1,a,m)) return true;
    if(arr[x]==0) return false;
    for(int i=0;i<k;i++)
	a[i]+=arcacs[x][i];
    if(f(x+1,a,m+1)) return true;
    for(int i=0;i<k;i++)
	a[i]-=arcacs[x][i];
    return false;
}

int acs(int *x)
{
    int r=0;
    for(int i=0;i<k;i++)
	r+=x[i]<<i;
    return r;
}
void ch(bool x)
{
    if (x)
	printf("YES\n");
    else printf("NO\n");
}
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
	int a[k];
	for(int j=0;j<k;j++)
	    scanf("%d",a+j);
	arr[acs(a)]=1;
    }
    int empty[4]={0,0,0,0};
    ch(f(0,empty,0));
}
