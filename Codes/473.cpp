#include<bits/stdc++.h>
#define loop(a,b,c) for(int a=b;a<c;a++)
using namespace std;

int main(){
	int k=0,ans,n,angka=1;
	cin>>n;
	while(k!=n){
		int tmp1=angka,tot=0;
		while(tmp1>0){
			tot+=(tmp1%10);
			tmp1/=10;
		}
		if(tot==10)k++;
		if(k==n)ans=angka;
		angka++;
	}
	cout<<ans<<"\n";
}