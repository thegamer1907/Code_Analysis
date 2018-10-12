#include<bits/stdc++.h>
using namespace std;
const int Maxn=5e5+10;
string s[Maxn];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=n-2;i>=0;i--){
		string f;
			for(int j=0;j<min((int)s[i].size(),(int)s[i+1].size());j++){
				if(s[i][j]<s[i+1][j]){
					for(int k=j;k<(int)s[i].size();k++){
						f+=s[i][k];
					}
					break;
				}
				else if(s[i][j]==s[i+1][j]){
					f+=s[i][j];
				}
				else{
					break;
				}
			}
		s[i]=f;	
	}
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
}
