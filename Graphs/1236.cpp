#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m; 
	cin>>n>>m;
	vector<int>v; 
	int x;
	for (int i=0;i <n-1;i++){
		cin>>x; 
		v.push_back(x); 
	}
	int k;
	for(int i=0;i<n-1; ){
		 i=i+v[i]; 
		 if (i==(m-1)){
		 	cout <<"YES"<<endl;
		 	return 0;
		 }
	}
	
	cout <<"NO"<<endl;
	return 0;
}