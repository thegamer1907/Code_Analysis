#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,l;
	cin>>n>>m;
	int v[n],a[n+1];
	set <int> st;
	a[n]=0;
	for (int i = 0; i < n; ++i){
		cin>>v[i];
	}
	for (int i = n-1; i >= 0; --i){
		if(st.count(v[i])==0){
			st.insert(v[i]);
			a[i]=a[i+1]+1;
		}
		else{
			a[i]=a[i+1];
		}
	}
	for (int i = 0; i < m; ++i){
		cin>>l;
		l--;
		cout<<a[l]<<endl;
	}
//	system("pause");
	return 0;
}