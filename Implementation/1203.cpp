#include<iostream>
using namespace std;
int main(){
int n,T,t=0;
string st;
cin>>n>>T;
//for(int j=0;j<n;j++)
cin>>st;
//int i=0;
while(t!=T){
    for(int i=0;i<n-1;i++){
    if(st[i]=='B' && st[i+1]=='G')
    {
        st[i]='G';
        st[i+1]='B';
        i++;
    }
  }
  t++;
}

cout<<st;

}
