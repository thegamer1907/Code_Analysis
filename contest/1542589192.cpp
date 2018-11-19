#include<iostream>
using namespace std;
string a,b;
long long n;
bool d1=false,d2=false;
int main(){
cin>>a;
cin>>n;
for(long long i=0;i<n;i++){
cin>>b;
if(b[0]==a[1]){
    d1=true;
}
if(b[1]==a[0]){
    d2=true;
}
if(b[0]==a[0] and b[1]==a[1]){
        d1=true;
    d2=true;
}
}
if(d1 and d2){
cout<<"YES";
}else{
cout<<"NO";
}
return 0;
}