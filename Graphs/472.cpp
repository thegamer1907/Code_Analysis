#include <iostream>
using namespace std;
int main (){
	long long n;
	int t;
	char r;
	string s;
	cin>>n>>t;
	cin>>s;
	for (int j=0;j<t;j++){
		for (int i=0;i<n;i++){
			if (s[i]=='B' && s[i+1]=='G'){
				r=s[i];
				s[i]=s[i+1];
				s[i+1]=r;
				i++;
			}
		}
	}
	cout<<s;
	return 0;
}