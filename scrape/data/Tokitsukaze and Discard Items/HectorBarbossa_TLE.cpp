#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
	lli n,m,k,l,th,i,c,no;
	cin>>n>>m>>k;
	lli a[m];
	for(i=0;i<m;i++)
		cin>>a[i];
	l=0;
	th=k;
	c=0;
	no=0;
	while(l<m){
		while(l<m && a[l]<=th){
			l++;
			no++;
		}
		if(no!=0){
			c++;
			th+=no;
			no=0;
		}else{
			th+=k;
			th=min(th,n);
		}
	}
	cout<<c<<endl;
	return 0;
}