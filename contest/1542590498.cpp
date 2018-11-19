#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<cstdio>
#include<string>
#include<vector>
#include<math.h>
#include<time.h>
#include<utility>
#include<cstdlib>
#include<sstream>
#include<cstring>
#include<stdio.h>
#include<iomanip>
#include<iostream>
#include<algorithm>
//#include<conio.h>
using namespace std;
int n;
string s,str[132];
bool s0,s1;
int main(){
	cin>>s>>n;
	for(int i=0;i<n;i++){
		cin>>str[i];
		if(str[i][1]==s[0]) s0=1;
		if(str[i][0]==s[1]) s1=1;
		if(str[i]==s){
			s0=1;s1=1;
		}
	}
	if(s0&&s1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
