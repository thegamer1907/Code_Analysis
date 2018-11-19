#include<cstring>
#include<iostream>
using namespace std;
int main(){
	string s;
	bool result=0;
	cin>>s;
	long long n;
	cin>>n;
	string c[n];
	for(long long i=0;i<n;i++){
		cin>>c[i];
		if(c[i]==s) result=1;
	}
	if(result==1) cout<<" YES";
	else{
		for(long long i=0;i<n;i++){
			for(long long j=0;j<n;j++){
				if(c[i][1]==s[0]&&c[j][0]==s[1]){
					result=1;
					break;
				}
			}
		}
		if(result==1) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}
