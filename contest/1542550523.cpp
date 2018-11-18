#include <iostream>
#include<string>
using namespace std;
int main() {
	string a, b;
	int n;
	cin>>a>>n;
	int lf=0,rt=0;
	while(n--) {
		cin>>b;
		if(b==a) lf = rt = 1;
		if(b[1]==a[0]) lf = 1;
		if(b[0]==a[1]) rt = 1;
	}
	cout<<(lf&&rt ? "YES" : "NO");
	return 0;
}
/*int main(){
	char a[101];
	cin.getline(a,101);
	int n,s[130]={0};
	cin>>n;
	for(int i=0;a[i]!='\0';++i){
		s[a[i]]++;
	}
	cin.ignore(1000,'\n');
	do {
		char b[101];
		cin.getline(b,101);
		for(int i=0;b[i]!='\0';++i){
		s[b[i]]--;
	}
		n--;
	}while(n>0);
	for(int i='a';i<='z';++i){
		if(s[i]>0){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}
*/