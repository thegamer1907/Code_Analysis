#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::sort;
using std::cin;
using std::cout;
using std::ios;

const int MAXN=105;
int n;

string psw,can[MAXN];

int main(){
	ios::sync_with_stdio(false);
	cin>>psw>>n;
	for(int i=1;i<=n;++i)
		cin>>can[i];
	bool flag1=false,flag2=false;
	for(int i=1;i<=n;++i){
		if(can[i]==psw){
			cout<<"YES";
			return 0;
		}
		if(can[i][0]==psw[1])
			flag2=true;
		if(can[i][1]==psw[0])
			flag1=true;
	}
	if(flag1 && flag2) cout<<"YES";
	else cout<<"NO";
	return 0;
}
