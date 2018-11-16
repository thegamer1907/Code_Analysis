#include<bits/stdc++.h>
using namespace std;

int main(){
int n,t;
char s[100];
cin>>n>>t;
for(int i=0;i<n;i++)
        cin>>s[i];
for(int i=0;i<t;i++)
    for(int j=0;j<n;j++)
if(s[j]=='B'&&s[j+1]=='G'){swap(s[j],s[j+1]);j++;}
for(int i=0;i<n;i++)
        cout<<s[i];
}