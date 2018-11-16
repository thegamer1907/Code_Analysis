#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<set>
//#includ"mari.h"
using namespace std;
typedef long long ll;
int a[103323] , idx[8888];
 int main(){
	 set<int>st;
	int l , n , s  , m;
	cin>>n>>l;
	for(int i = 1 ; i <= n ; i++){
		cin>>a[i];
		//st.insert(a[i]);
		//a[i] = st.size();
	}
	for(int i = n ; i>=1 ; i--){
		st.insert(a[i]);
	//	cout<<a[i]<<" "<<endl;
		a[i] = st.size();
	}
	while(l--){
		cin>>m;
		cout<<a[m]<<"\n";

	}
	 return 0 ; 
 }