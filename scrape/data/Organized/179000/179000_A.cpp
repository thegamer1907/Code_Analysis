#include <bits/stdc++.h>
using namespace std;
int64_t n,m,k,b,c,s,x,r;
int main(){
	for(cin>>n>>m>>k,b=k;m--;){
		cin>>x;
		x-=s;
		if(x<=b)c++;
		else{
			r+=!!c;
			s+=c;
			x-=c;
			b=(x+k-1)/k*k;
			c=1;
		}
	}
	cout<<r+!!c;
}