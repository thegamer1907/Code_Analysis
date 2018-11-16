/*******************I solemnly swear that I am up to no good***********************/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,t;cin>>n>>t;
   string initial;cin>>initial;
   for(int i=0;i<t;++i){
    for(int j=0;j<initial.length()-1;j++){
    if(initial[j]=='B' && initial[j+1]=='G'){
        initial[j]='G';initial[j+1]='B';j++;
    }}
   }

   cout<<initial<<endl;





}

/**********************************Mischief Managed****************************/
