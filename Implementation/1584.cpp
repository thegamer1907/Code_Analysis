#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()

using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length();
	int z = 0,o = 0;
	bool f = 1;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			o++;
			z=0;
		}else{
			o=0;
			z++;
		}
		if(o==7 || z==7){
			f = 0;
			break;
		}
	}
	if(!f){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	
	return 0;
}
