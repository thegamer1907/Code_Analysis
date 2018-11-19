#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int a1,a2,a3,b1,b2;
int f[128];
ll ans=0;
int main(){
	cin>>a1>>a2>>a3>>b1>>b2;
	a1=(a1*5)%60;b1=(b1*5)%60;b2=(b2*5)%60;
	f[a1]+=1;f[a2]+=1;f[a3]+=1; 
	if(b1>b2){
		int t;
		t=b1;b1=b2;b2=t;
	}
	
	for(int i=b1;i<b2;i++) if(f[i]) /*printf("%d ",i),*/ans+=f[i];
	if(ans==0||ans==3) printf("YES");
	else printf("NO");
	return 0;
}