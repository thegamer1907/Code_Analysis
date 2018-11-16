#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int N,t;
	string s;
	cin >> N >> t;
	cin >> s;
	while(t--){
		for(long long int i=0;i<N;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				char temp = s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
				i++;
			}
		}
	}
	cout << s << endl;
	return 0;
}