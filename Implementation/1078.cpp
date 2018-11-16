// Example program
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n, t;
 string ch;
 cin>> n>>t;
 cin>> ch;
 while (t--) {
     for(int i=0; i+1<n;i++){
         if(ch[i]=='B'){if(ch[i+1]=='G'){
             ch[i]='G';
             ch[i+1]='B';
             i++;}}
         }}
         cout<<ch;

}