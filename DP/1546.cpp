#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n) 
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")	 
#define ps() 	printf(" ")
#define ll long long
#define ull unsigned long long 
#define MAX 1e12
#define mod 1073741824
#define pi 3.1415926536
#define ex 1e9
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()


int l=0,r;
int a[105];
int res=0,exist=0;

int main(){
	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n; sf(n);

	for (int i = 0; i < n; ++i)
	{
		sf(a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==1){
			l+=1;
		}
		else 
			break;
	}
	if(l==n){cout<<n-1<<endl; return 0;}
	
	r=n;

	for(int i=n-1;i>=0;--i){
		if(a[i]==1){
			r-=1;
		}
		else 
			break;
	}
	for(int i=l;i<r;++i){
		if(a[i]==1)
			exist+=1;
	}

	int p1;
	for (int i = l; i <r; ++i)
	{	p1=i;
		int ones=0;
		while(p1<r){
			if(a[p1]==0)	
				ones+=1;
			else 
				ones-=1;
			res=max(ones+exist,res);
			++p1;
		}
	}
	//cout<<l<<" "<<res<<" "<<n-r<<endl;
	cout<<res+l+n-r<<endl;	
	return 0; 


} 		