#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
int c=0;
string x;
cin>>x;
for(int i=0;i<x.size();i++){
  if(x[i]==x[i+1]){
    c++;
    if(c==6){
    cout<<"YES"<<endl;

        return 0;}
  }
  else
    c=0;
}
cout<<"NO"<<endl;


 return 0;}
