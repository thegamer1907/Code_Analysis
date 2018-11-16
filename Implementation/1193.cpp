#include<iostream>
#include<string.h>
using namespace std;
 int main()
 {
 	int n,t;
 	cin>>n>>t;
 	char s[n];
 	cin>>s;
 	while(t--)
 	{
 		for(int i=1;i<n;i++){
 			if(s[i]=='G' && s[i-1]=='B'){
 				s[i-1]='G';
 				s[i]='B';
 				i++;
 			}
 		}
 	}
 	cout<<s;
 	return 0;
 }