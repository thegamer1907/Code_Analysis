#include <iostream>
using namespace std;
int main(){
	int s[3]={0,0,0},n,i,x;
	cin >> n;
	while(n--){
		for(i=0;i<3;i++){
			cin >> x;
			s[i]+=x;
		}
	}
	if(s[0] || s[1] || s[2])
		cout<<"NO\n";
	else
		cout<<"YES\n";
}
