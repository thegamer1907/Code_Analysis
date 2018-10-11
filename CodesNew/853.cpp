#include<iostream>
#include<set>
using namespace std;

int n,m;
string s;
set<string> ss;

main() {

	cin>>n>>m;

	for(int i=0; i<n+m; i++){
		
		cin>>s;
		
		ss.insert(s);
		
	}
	
	if(n>m||(ss.size()%2==1&&n==m)){
		
		cout<<"YES"<<endl;
		
	}else{
		
		cout<<"NO"<<endl;
		
	}
	
	return 0;

}
