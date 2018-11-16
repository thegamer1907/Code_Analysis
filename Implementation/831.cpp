#include<iostream>
using namespace std;int main(){int n,t;string s;cin>>n>>t>>s;for(;t--;){for(int i=0;++i<n;){if(s[i-1]=='B'&&s[i]=='G'){swap(s[i],s[i-1]);i++;}}}cout<<s;}