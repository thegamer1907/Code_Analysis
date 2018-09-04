#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  
  long long n,S;
  
  cin >> n >> S;
  
  long long a[100001];
  
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  
  long long lowK = 0, highK = n;
  
  long long cijeneZaK[100001];
  
  while(lowK < highK){
    long long k = (lowK+highK+1)/2;
    for(long long i = 1; i <= n; i++){
      cijeneZaK[i] = a[i] + i*k;
    }
    sort(cijeneZaK + 1,cijeneZaK + n + 1);
    long long zbirMinimalnihCijena = 0;
    for(int i = 1; i <= k; i++){
      zbirMinimalnihCijena += cijeneZaK[i];
    }
    if(zbirMinimalnihCijena <= S){
      lowK = k;
    }else{
      highK = k-1;
    }
  }
  
  long long maksiK = lowK;
  long long cijeneZaMaksiK[100001];
  for(long long i = 1; i <= n; i++){
    cijeneZaMaksiK[i] = a[i] + i*maksiK;
  }
  sort(cijeneZaMaksiK + 1,cijeneZaMaksiK + n + 1);
  long long zbirMinimalnihCijenaZaMaksiK = 0;
  for(int i = 1; i <= maksiK; i++){
    zbirMinimalnihCijenaZaMaksiK += cijeneZaMaksiK[i];
  }
  
  cout << maksiK << " " << zbirMinimalnihCijenaZaMaksiK << endl;
  
  
  
  
  
  
  
  
}