#include<bits/stdc++.h>

using namespace std;

#define int long long

int n,m,k;

int func(int x){
  int r = 0;

  for(int i = 1;i <= n;i++){
    r += min(m,x/i);
  }

  return r; 
}

int bb(int x,int y){

  int meio = (x + y)/2;

  if(x == y) return x;

  if(func(meio) < k) return bb(meio + 1,y);
  else return bb(x , meio);

}

#undef int long long
int main(){
#define int long long  

  cin >> n >> m >> k;

  cout << bb(1,n*m) << endl;

}





