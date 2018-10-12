#include <iostream>
#include <string>
#include <set>
using namespace std;
int i,m,k,a,b;
string mtliani;
set <string> s;
main (){
cin>>a;
cin>>b;
for (i=1; i<=a+b; i++){
    cin>>mtliani;
    s.insert(mtliani);  
  }
  m=a+b;
  m=m-s.size();
  if (m%2==1) a++;
  if(a>b) cout<<"YES";
   else cout<<"NO";
}