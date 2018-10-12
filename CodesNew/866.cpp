#include <bits/stdc++.h>
using namespace std;

set < string > words[2];

int main(){
   int n,m;
   cin >> n >> m;
   for(int i=0; i<n; i++){
      string s;
      cin >> s;
      words[0].insert(s);
   }
   for(int i=0; i<m; i++){
      string s;
      cin >> s;
      words[1].insert(s);
   }
   int both = 0;
   for(auto temp: words[0]){
      if( words[1].find( temp ) != words[1].end() ){
         both++;
      }
   }
   n-= ( both%2 == 0 );
   cout << ( n >= m ? "YES\n" : "NO\n" );
   return 0;
}