#include <iostream>
using namespace std;
int pre[2010];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		int t;
		cin>>t;
		pre[i]=t;
	}
	int mx=-1e9;
	for(int i=1;i<=n;++i){
		int cnt=1;
		int pos=i;
		while(pre[pos]!=-1){
			pos=pre[pos];
			++cnt;
		}
		mx=max(mx,cnt);
	}
	cout<<mx<<endl;
	return 0;
}
