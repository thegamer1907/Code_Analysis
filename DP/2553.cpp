#include<iostream>
using namespace std;
int a[100005];
int main (){
	int n,ans,l;
	cin>>n;
	ans=l=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]>a[i-1]){
			l++;
			if (l>ans) ans=l;
		}
		else l=1;
	}
	cout<<ans;
	return 0;
}
