#include <bits/stdc++.h>
#define lld long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
 
using namespace std;
 
 
 
int main(){
   	std::ios::sync_with_stdio(false);
   	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w",stdout);
   	#endif
	
   	string s;
   	cin>>s;
   	if(s.length()<7){
   		cout<<"NO";
   		return 0;
   	}
   	for(int i=0;i<s.length()-7+1;i++){
   		string str = s.substr(i,7);
   		if(str=="1111111" || str=="0000000"){
   			cout<<"YES";
   			return 0;
   		}
   	}
   	cout<<"NO";
   	return 0;
}