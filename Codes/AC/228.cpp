#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	vector<int> v;
	for(int i=1;i<=n;++i){
		int t;
		scanf("%d",&t);
		v.push_back(sum+=t);
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;++i){
		int t;
		scanf("%d",&t);
		auto it=lower_bound(v.begin(),v.end(),t);
		printf("%d ",it-v.begin()+1);
	}
	cout<<endl;
	return 0;
}
