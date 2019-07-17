#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
long long a[200000];
int main(){
	long long n,m,k;
	cin>>n>>m>>k;
	long long i,j;
	for(i=1,j=1;i<=m;i++){
		cin>>a[i];
	}
	i=1;
	long long t,t1=1,s=0,ss=0;
	int f=0;
	while(m-ss>0){
		if(a[t1]>k*i+ss){
			i=(a[t1]-ss)/k;
			if((a[t1]-ss)%k)
				i++;
			continue;
		}
		if(k*(i-1)+1+ss>a[m])
			break;
		t=lower_bound(a+t1,a+m,k*i+ss)-a;
		if(t==m&&a[m]<=k*i+ss){
			s++;
			break;
		}
		if(a[t]>k*i+ss)
			t--;
//		cout<<i<<" "<<t<<" "<<t1<<endl;
		ss=t;
		t++;
		t1=t;
		s++;
		while(a[t]<=k*i+ss){
			t1=lower_bound(a+t,a+m,k*i+ss)-a;
			if(t1==m&&a[m]<=k*i+ss){
				f=1;
				s++;
				break;
			}
			if(a[t1]>k*i+ss)
				t1--;
			s++;
			ss=t1;
//			cout<<i<<" "<<t1<<endl;
			t1++;
			t=t1;
		}
		if(f)
			break;
		i++;
	}
	cout<<s<<endl;
}