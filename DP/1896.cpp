#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s ;
   cin >> s ;
   size_t Fab = s.find("AB") , Lba = s.rfind("BA");
   size_t Fba = s.find("BA") , Lab = s.rfind("AB");

   if(Fab != string::npos && Lba != string::npos && Fab+1<Lba ){
    return cout << "YES" << endl , 0 ;
   }
   if(Fba != string::npos && Lab != string::npos && Fba+1 < Lab ){
    return cout << "YES" << endl , 0 ;
   }
   cout << "NO" ;
}
