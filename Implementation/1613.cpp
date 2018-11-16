#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int max = 0;
	int i = 1;
	int ccnt = 1; //consec count
	while(i<=s.length()){
		if(s[i] == s[i-1]) ccnt++;
		else{
			if(ccnt>max) max = ccnt;
			ccnt = 1;
		}
		i++;
	}
	if(max>6) cout<<"YES";
	else cout<<"NO";
return 0;
}
