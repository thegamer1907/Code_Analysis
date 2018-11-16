#include<bits/stdc++.h>

using namespace std;

int n,t;
string fila;

int main(){
  scanf("%d %d",&n,&t);
  cin>>fila;
  for(int i=0;i<t;i++)
    for(int j=0;j<n+1;j++){
      if(fila[j]=='B' && fila[j+1]=='G'){
        swap(fila[j],fila[j+1]);
        j++;
      }
    }
  cout<<fila<<endl;
  return 0;
}
