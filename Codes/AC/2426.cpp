#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<string.h>
#include<limits>
#include<queue>
typedef long long int llt;
using namespace std;
vector<llt> cnt(10000001);
vector<llt> c(10000001);
vector<llt> sp;
vector<llt> x(10000001);
vector<bool> check(10000001);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	llt n,i,j;
	cin>>n;
	llt a[n];
	for(i=0;i<10000001;i++){
		cnt[i]=0;
		c[i]=0;	
		check[i]=true;
	}
	for(i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	llt k;
	for(i=2;i<=sqrt(10000001);i++){
		if(check[i]==true){
			for(j=2*i;j<=10000000;j+=i){
				check[j]=false;
			}
		}
	}
	for(i=2;i<=10000000;i++)
		if(check[i]==true){
			sp.push_back(i);
		}
	for(i=0;i<sp.size();i++)
		for(j=sp[i];j<=10000000;j+=sp[i]){
			c[sp[i]]+=cnt[j];
		}
	for(i=0;i<=10000000;i++)
		x[i]=0;
	for(i=2;i<=10000000;i++)
		if(check[i]==true){
			x[i]=x[i-1]+c[i];
		}
		else
			x[i]=x[i-1];
	llt m;
	cin>>m;
	while(m-->0){
		cin>>i>>j;
		if(j>10000000)
			j=10000000;
		if(i>10000000){
			cout<<"0"<<endl;
			continue;
		}
		if(i!=0)
			cout<<x[j]-x[i-1];
		else
			cout<<x[j];
		cout<<endl;
	}
}

