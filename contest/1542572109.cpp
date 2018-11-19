#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char c1,c2,a,b;
	int n,ans1=0,ans2=0;
	cin>>c1>>c2>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a==c1&&b==c2){
			cout<<"YES"<<endl;
			return 0;
		}
		if(b==c1)ans2++;
		if(a==c2)ans1++;
	}
	if(ans1&&ans2)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
} 