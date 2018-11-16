#include <iostream>
using namespace std;

int main() {
	int n;
	int t;
	cin>>n>>t;
	string a;
	cin>>a;
	while(t--){
		for(int i=0;i<n;){
			if((a[i]=='B')&(a[i+1]=='G')){
				a[i]='G';
				a[i+1]='B';
				i+=2;
			}
			else i++;
		}
	}
	cout<<a<<endl;
	return 0;
}