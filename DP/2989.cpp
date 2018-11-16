#include <bits/stdc++.h>
using namespace std;


int main(){
	int N;cin>>N;
	string a,b;cin>>a>>b;
	int total = 0;
	for(int i=0;i<a.size();i++) if(a[i] != b[i]){
		if(i+1 < a.size() && a[i+1] == b[i] && a[i] == b[i+1]) swap(a[i],a[i+1]);
		else a[i] = b[i];
		total += 1;
	}
	cout<<total<<endl;
}