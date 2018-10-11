#include<string>
#include<iostream>
#include<set>
using namespace std;
string s;
int a,b,d,n;
set<string> st,ts;
int main(){
     cin>>a>>b;
     d=a;
     n=b;
     for(int i=0; i<a+b; i++){
          cin>>s;
          st.insert(s);
     }
     if(((a+b)-st.size())%2==1)d++; 
     if(d>n) cout<<"YES";
     else cout<<"NO";
     return 0;
}