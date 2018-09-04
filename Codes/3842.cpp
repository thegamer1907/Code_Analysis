#include <bits/stdc++.h>
using namespace std;

string s;
int n,a,b,c,na,nb,nc,pa,pb,pc;
long long r;

int main() {
	
	cin>>s;
	cin>>na>>nb>>nc>>pa>>pb>>pc>>r;
	n=s.size();
	a=b=c=0;
	for (int i=0;i<n;i++){
		a+=(s[i]=='B');
		b+=(s[i]=='S');
		c+=(s[i]=='C');
	}
	long long low=0,high=1000000000000000;
	while (low<high){
		long long md=(low+high+1)/2;
		long long needa=md*a,needb=md*b,needc=md*c;
		long long amount=max(0ll,(needa-na))*pa + max(0ll,(needb-nb))*pb + max(0ll,(needc-nc))*pc;
		if (amount<=r)
			low=md;
		else
			high=md-1;
	}
	cout<<low;
	return 0;
}