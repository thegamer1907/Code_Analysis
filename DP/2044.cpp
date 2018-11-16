#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , m ;
	 cin>>n>>m;
	 int arr[n],res[n];
	 for( int i = 0 ; i < n ; ++i )cin>>arr[i];
	 set<int> s;
	 for( int i = n-1 ; i>=0 ; --i){
	 	s.insert(arr[i]);
	 	res[i]=s.size();
	 }
	 for( int i = 0 ; i < m ; ++i){
	 	int  num ; 
	 	cin>>num;
	 	cout<<res[--num]<<"\n";
	 }
	 
	return 0;
}