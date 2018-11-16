#include <iostream>
using namespace std;
int num[100010];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		scanf("%d",&num[i]);
	}
	int mx=0;
	int cnt=0;
	for(int i=1;i<=n;++i){
		if(num[i]>num[i-1]){
			++cnt;
		}else{
			cnt=1;
		}
		mx=max(mx,cnt);
	}
	cout<<mx<<endl;
	return 0;
}
