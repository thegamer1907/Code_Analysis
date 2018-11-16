#include<bits/stdc++.h>
using namespace std;
char a[20];
int main(){
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=0;i<n;i++){
		scanf("%s",a);
		if(a[0]=='T'){
			ans+=4;
		}else
		if(a[0]=='C'){
			ans+=6;
		}else
		if(a[0]=='O'){
			ans+=8;
		}else
		if(a[0]=='D'){
			ans+=12;
		}else{
			ans+=20;
		}
//		cout<<ans<<endl;
	}
	printf("%d\n",ans);
}