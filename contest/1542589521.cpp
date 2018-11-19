#include <bits/stdc++.h>

using namespace std;

int main(){

   int i,j,k;
   int n;
   string s;
   cin>>s;
   cin>>n;
   string ma[111];
   for(i=0;i<n;i++) cin>>ma[i];
   for(i=0;i<n;i++){
    if (s==ma[i]){
        cout<<"YES";
        return 0;
    }
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        string t;
        t=ma[i]+ma[j];
        if ((t[1]==s[0])&&(t[2]==s[1])){
           cout<<"YES";
        return 0;
        }
    }
   }
   cout<<"NO";

}
