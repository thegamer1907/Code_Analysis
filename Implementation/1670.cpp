#include <iostream>
#include <string>
using namespace std;
string s; 
int dp[110];
bool c;
int main(){
	cin >>s ; 
	dp[0]=1;
	for(int i=1 ; i<s.size() ; i++){
		if(s[i]==s[i-1])
		dp[i]=dp[i-1]+1;
		else
		dp[i]=1;
		if(dp[i]>6)
		c=true;
	}
	if(c==true)
	cout << "YES";
	else
	cout << "NO" ; 
}
