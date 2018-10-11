#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
int n,t;
cin>>n>>t;
vector<int> a(n);
for(int i=0;i<n;i++)cin>>a[i];
int j=0,time=0;
while(j<n && time+a[j]<=t){
	time+=a[j];
	j++;
}
int ans=j;
for(int i=0;i<n;i++){
	time-=a[i];
	while(j<n && time+a[j]<=t){
		time+=a[j];j++;
	}
	if(j-i-1>ans)ans=j-i-1;
}
	cout<<ans<<endl;

	return 0;
}
