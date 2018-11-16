#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define all(x) x.begin() , x.end()

int const N = 100000;

int main(){
   string f0 ; 
   cin >> f0 ; 
   size_t AB = f0.find("AB");
   size_t BA = f0.find("BA",AB+2);
   if(AB != string::npos && BA != string::npos)return puts("YES"),0;
   size_t BAA = f0.find("BA");
   size_t ABB = f0.find("AB",BAA+2);
   if(BAA != string::npos && ABB != string::npos)return puts("YES"),0;
   puts("NO");
}