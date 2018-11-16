#include<bits/stdc++.h>
#define reg register
using namespace std;
typedef long long ll; 
int main(){
	string s;
	cin>>s;
	int flag=0;
	if(s.length()<7) {
		cout<<"NO\n";
		return 0;
	}
	for(int i=0;i<=s.length()-7;i++){
		flag=0;
		for(int j=i;j<i+7;j++){
			if(s[i]==s[j])
			continue;
			else {
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"YES\n";
			return 0;
		}
	} 
	cout<<"NO\n";
	return 0;
}