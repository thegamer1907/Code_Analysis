#include<bits/stdc++.h>
using namespace std;
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 	string s;
 	cin>>s;
 	s=s;
 	int t=1;
 	for(int i=1;i<s.length();i++){
 		if(s[i]==s[i-1]){
t++;
 			if(t<7){
 			}
 			else{
 				cout<<"YES\n";
 				return 0;
 			}
 		}
 		else{
 			t=1;
 		}
 	}
 	cout<<"NO\n";
    return 0;
}