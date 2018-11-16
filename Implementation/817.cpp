#include <bits/stdc++.h>
using namespace std;


int main() { 
  int n , t ;
  cin>>n>>t ;
  string s ;
  cin>>s;
  while(t--){
    	int a[n-1]= {0} ;
  	for(int i=0;i<n-1;i++){
  		if(s[i]=='B'&&s[i+1]=='G'&&!a[i])
  		 {swap(s[i],s[i+1]) ; a[i+1]=1;}
  	}
  }
  cout<<s;
	return 0;
}