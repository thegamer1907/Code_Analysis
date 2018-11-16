#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j,l;
	int a[100000];
	int ans[100000]={0};
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	set<int> s;
	for(i=n-1;i>=0;i--){
		s.insert(a[i]);
		ans[i]=s.size();
	}
	for(i=0;i<m;i++){
		scanf("%d",&l);
		cout<<ans[l-1]<<endl;

	}

}