#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,e=0,ans=0,i,j,d;
    string s;
    cin>>a>>b;
	cin>>s;
    for(j=1;j<=b;j++){
	for(i=1;i<s.size();i++){
    	if(s[i-1]=='B' && s[i]=='G') {
    		swap(s[i-1],s[i]);
    		i++;
		}
	}
}
cout<<s;
}	