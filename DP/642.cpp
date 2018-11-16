#include <bits/stdc++.h>

using namespace std;

int tem[100010];

int main(){
   string ent;
   cin>>ent;
   int lim=ent.length(), qt=0;
   for(int i=0; i<100010; i++) tem[i]=0;
  
   for(int i=0; i<lim-1; i++){
      if(ent[i]==ent[i+1]){
         qt++;
      }
      tem[i+1]=qt;
   }
   int a, b, c;
   cin>>a;
   while(a--){
      cin>>b>>c;
      cout<<(tem[c-1]-tem[b-1])<<endl;
   }
   
   return 0;
}