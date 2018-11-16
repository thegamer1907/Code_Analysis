#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;  cin>>n>>x;
   string s;  cin>>s;
   for(int i=0; i<x; i++){

        for(int j=0;j<s.size()-1; j++){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;}
        }
   }
   cout<<s;
    return 0;
}
