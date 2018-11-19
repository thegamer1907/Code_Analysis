#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	string a;
	cin>>a;
	int n;
	cin>>n;
	string s;
	int cnt1=0;
	int cnt3=0;
	int cnt2=0;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s == a){
			cnt2=2;
		}
		
		if(s[1] == a[0]){
			cnt1++;
		}
		if(s[0] == a[1]){
			cnt3++;
		}
		
	}
	
	if(cnt2>=2 || (cnt1>=1 && cnt3>=1))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
