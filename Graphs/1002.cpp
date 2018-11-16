#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv){
	int n,d,p=1;cin>>n>>d;
	vector<int> a(n);
	for(int i=1;i<n;i++) cin>>a[i];
	while(p<d) p+=a[p];
	auto re=(p==d)?"YES":"NO";cout<<re<<endl;
	return 0;
}
