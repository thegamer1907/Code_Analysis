//macmurdojack dp
#include<bits/stdc++.h>
#define ll long long 
#define f(i,ini,last) for(long long int i=ini;i<last;i++)
#define M(a,value) memset(a,value,sizeof a)
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,c0=0,c1=0,max0=-1;
	f(i,0,n){
		cin>>a;
		if(a==1){
			c1++;
			if(c0>0){
				c0--;
			}	
		}
		if(a==0){
			c0++;
			if(c0>max0){
				max0=c0;
			}
		}
	}
	cout<<c1+max0<<endl;
	return 0;
}