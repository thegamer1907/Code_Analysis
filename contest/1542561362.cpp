 #include<iostream>
using namespace std;

int main(){
	int i,n,flag1=0,flag2=0,flag3=0;
	string str,s;
	cin>>str;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
		if(s[0]==str[1]){
			flag1=1;
		}
		if(s[1]==str[0]){
			flag2=1;
		}
		if(s==str){
			flag3=1;
		}
	}
	if((flag1 && flag2) || flag3){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}