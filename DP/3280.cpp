#include<bits/stdc++.h>
using namespace std;
long long l,r,ll,rr,ans;
int main(){
	ans=0;
	cin>>l>>r;ll=l;rr=r;
	long long Pow=1;
	for(int i=1;i<=60;++i)
	Pow=Pow*2;
	for(long long i=1;i<=Pow;i<<=1){	
		if((l&i)>=1&&(r&i)>=1){
			if(r-i>=ll){ans+=i;r-=i;}
			continue;
		}
		if((l&i)||(r&i))ans+=i;
		else {
			if(l+i<=rr){ans+=i;l+=i;}
		}
	}
	cout<<ans<<endl;
	return 0;
}
