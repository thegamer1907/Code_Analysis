#include <iostream>
#include <algorithm>
using namespace std;
int maximum(long long int x,long long int y){
	if(x<y){
		return 2;
	}
	else
		return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long int s[100005]={0},i,j,t,n,x[100005],max=0;
	cin>>n>>t;
	j=0;
	for(i=0;i<n;i++){
		cin>>x[i];
		while(t<x[i]){
			j+=1;
			s[j]=s[j-1]-1;
			t+=x[j-1];
		}
		t-=x[i];
		s[j]+=1;
		if(s[j]>max){
			max=s[j];
		}
	}
	cout<<max;
	return 0;	
}