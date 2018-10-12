#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const  int MAX=3e5+5;
const long long int MAX1=1e5+9;
const long long int inf =INT_MAX;
const long long int mod = 1e9+7;
string st[MAX][2];
bool  cmp(pair<int , int> &a ,pair<int, int> &b){
	return (a.first>b.first);
}
long long check(long long n){
	long long  ans=0;
	for(long long i=2;i*i*i<=n;++i)
		ans+=n/(i*i*i);
	return ans;
}
int main(){
	long long low=0,high=1e16,mid,m;
	cin>>m;
	for(;low<high;){
		mid=(low+high)/2;
		if(check(mid)<m) low=mid+1;
		else high=mid;
	}
	cout<<(check(low)==m?low:-1)<<'\n';
}