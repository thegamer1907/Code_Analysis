#include<bits/stdc++.h>
using namespace std;

#define FOR(i,principio,fin)for(int i=principio;i<fin;i++)

const int N=100+6;
int a[N];
int n,k,res=0,puntaje;

int main() {
  cin>>n>>k;
  FOR (i,0,n) cin>>a[i];
  puntaje = a[k-1];
  FOR (i,0,n) {
    if ((a[i] >= puntaje) and (a[i] > 0)){
      res = res+1;
    } 
  }
  cout<<res<<endl;
}
