#include<iostream>
using namespace std;

string ss;
string s[105];
int n;
int main(){
	cin>>ss;
	int n;
	cin>>n;
	
	for(int i=1;i<=n;++i) cin>>s[i];
	
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j){
			string s1=s[i]+s[j];
			string s2=s[j]+s[i];
//			cout<<s1<<' '<<s2<<endl;
			if(s1.find(ss)!=string::npos || s2.find(ss)!=string::npos){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	cout<<"NO"<<endl;
	return 0;
}