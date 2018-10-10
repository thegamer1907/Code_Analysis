#include<bits/stdc++.h>
using namespace std;
int n;
int a[111111];
int Mn=1e9;
int main(){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",&a[i]),Mn=min(a[i],Mn);
	if(Mn==0){
		int f=0;
		for(int i=0;i<n;i++){
			if(a[i]-f<=0){
				cout<<i+1<<endl;
				return 0;
			}else{
				f++;
			}
		}
	}else{
		int f=Mn;
		for(int j=Mn%n,i=0;i<n;j++){
			if(a[(j+i)%n]-f<=0){
				cout<<(j+i)%n+1<<endl;
				return 0;
			}else{
				f++;
			}
		}
	}
}