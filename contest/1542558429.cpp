#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	bool first =false , second=false;
	string str0;
	int n ;
	cin>>str0>>n;
	string str[n];
	for(int i=0 ; i<n ; i++){
		cin>>str[i];
		if(str[i][0]==str0[1])first=true;
		if(str[i][1]==str0[0])second=true;

		if(str[i]==str0){
			cout<<"YES";
			return 0;
		}

	}
	if(first==true && second == true)cout<<"YES"<<endl;
	else cout<<"NO";

}
