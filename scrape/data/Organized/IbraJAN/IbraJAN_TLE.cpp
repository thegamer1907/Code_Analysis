#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include <initializer_list>
#include<unordered_set>
#include<map>
#include<cmath>
#include <iterator>
#include<stack>
#include<queue>
#include <iomanip>
#include<math.h>
#include <limits.h>
#include <numeric>
#include <functional>
using namespace std;
void past_code();
//bool fml(int l,int z);
//pair<int,int>a[100005];
//pair<int,int>b[100005];

/*int fml (int x ,int y)
{
	if (x>=y)
		return x-y;
	else{

	if (y%2==0)
	return 1+fml(x,y/2);

	else
		return  1+fml(x,y+1);
	}
	
		
}*/

/*int n,a,b,c;
int d[4001];
int omg (int n)
{
	if (n<=0)
		return 0;
	if (d[n]!=-1)
		return d[n];
	int r=-10000000;
	if(n>=a)
		r=max(r,omg(n-a)+1);
	if (n>=b)
		r=max(r,omg(n-b)+1);
	if (n>=c)
		r=max(r,omg(n-c)+1);
	return d[n]=r;
}*/
//int y[300001];
/*int q[501];
int y[101];
int l[2];*/
//int y[1001];


int main(){
	long long x,m,k,z,sum=0,c=0;
	cin>>x>>m>>k;
	long long *y=new long long [m];
	long long *q=new long long [m];
	for (long long i=0;i<m;i++){
		cin>>y[i];
		q[i]=(y[i]/k)+(y[i]%k!=0);
	}
	z=q[0];
/*	for (long long i=0;i<m;i++){
		cout<<q[i]<<" ";
	}
	cout<<endl;*/
	for (int i=0;i<m;i++)
	{
		
		if (q[i]!=z)
		{
			
		//cout<<"c = "<<c<<endl;
			sum++;
			for (int j=i;j<m;j++)
			{
				y[j]=y[j]-c;
				//if (j==3)
				//	cout<<y[i]<<endl;
				q[j]=y[j]/k+(y[j]%k!=0);
				//cout<<"q["<<j<<"] = "<<q[j]<<endl;
			}
			c=0;
		/*	for (long long i=0;i<m;i++){
		cout<<q[i]<<" ";
	}
			cout<<endl;*/
			z=q[i];
		}
		c++;
	}
	if (c>0)
		sum++;
	cout<<sum<<endl;
	return 0;
}