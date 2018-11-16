#include<bits/stdc++.h>
using namespace std;

#define FOR(i,principio,fin)for(int i=principio;i<fin;i++)

int main() {
  int n,k;
  cin>>n>>k;
  int a[n];
  int res = 0;
  int puntaje;
  FOR (i,0,n) cin>>a[i];
  puntaje = a[k-1];
  FOR(i,0,n) {
    if ( a[i]>= puntaje and a[i]>0 ){
    res = res+1;
    } 
  }
  cout<<res<<endl;
}
