#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	vector<int> a(100,0);
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int mx=*max_element(a.begin(),a.begin()+n);
	int sum=accumulate(a.begin(),a.begin()+n,0);
	if(mx*n>=(sum+m)) cout<<mx<<" ";
	else{
		int t = (sum+m)-mx*n;
		if(t%n==0) cout<<mx+(t/n)<<" ";
		else cout<<mx+(t/n)+1<<" ";
	}
	cout<<mx+m<<endl;
	return 0;
}