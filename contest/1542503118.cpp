#include<bits/stdc++.h>
using namespace std;
string cadena,ncad;
long long n;
vector<string>ss;
bool first, second;

int main(){
  cin>>cadena;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>ncad;
    if(ncad[0]==cadena[1])first=true;
    if(ncad[1]==cadena[0])second=true;
    if ( ncad == cadena ) first = second = true;
  }
  if(first and second)cout<<"YES";
  else cout<<"NO";
}
