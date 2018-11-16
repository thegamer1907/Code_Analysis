#include <iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
map<char,int> scramble;
map<char,int> initial;
int n,t;
int a[1000000];
int main(){
	cin>>n>>t;
	for(int i=1; i<n; i++){
		cin>>a[i];
	}
	int start=1;
	while(start<n){
		if(start==t){
			cout<<"YES";
			return 0;
		}
		start+=a[start];
		if(start==t){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}