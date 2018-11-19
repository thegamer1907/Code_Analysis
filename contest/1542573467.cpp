#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string s,a[105];
	cin>>s>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=0;i<n;i++)
		for(int j=0;j<n; j++)
			if((a[i]+a[j]).find(s)!=string::npos){
				cout<<"YES\n";
				return 0;
			}
	cout<<"NO\n";
}
