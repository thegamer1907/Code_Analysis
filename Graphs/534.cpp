#include <bits/stdc++.h>

using namespace std;

int main() {
    
 int n,t;
 cin>>n>>t;
 
 vector<char>group(n);
 for(int i=0; i<n; i++)
 cin>>group[i];
 
 for(int i=0; i<t; i++)
 {
     for(int j=0; j<n; j++)
 if(group[j]=='B'&&group[j+1]=='G'){group[j]='G'; group[j+1]='B';j++;}
 
 }
     
 for(int i=0; i<n; i++)
 cout<<group[i];
    
    
    return 0;
}