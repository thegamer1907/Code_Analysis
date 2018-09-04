#include <iostream>
#include <vector>

using namespace std;

const int N=51;

int value(int n,long long k,const vector<long long>& size);

int main(){
  vector<long long> size(N);
  size[1]=1;
  for(int i=2;i<N;i++)
    size[i]=2*size[i-1]+1;

  int n;
  long long k;
  while(cin>>n>>k){
    cout<<value(n,k,size)<<'\n';
  }
}

int value(int n,long long k,const vector<long long>& size){
  if(k<=size[n-1])
    return value(n-1,k,size);
  if(k==size[n-1]+1)
    return n;
  return value(n-1,k-1-size[n-1],size);
}
