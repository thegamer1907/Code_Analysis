#include<bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
long long k,m=1,a[10005];
int main(){
	cin>>k;
	long long sum=19;
	a[m]=sum;
	m++;
	while(m<=k){
		sum+=9;
		long long num=sum,check=0;
		while(num!=0){
			long long a=num%10;
			check+=a;
			num=num/10;
		}
		if(check==10){
			a[m]=sum;
			m++;
		}
	}
	cout<<a[k];
}