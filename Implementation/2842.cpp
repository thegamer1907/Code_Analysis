#include <iostream>

using namespace std;

int main(){
  int n;
  while(cin>>n){
    int total=n/2;
    cout<<total<<'\n';
    while(n>3){
      cout<<"2 ";
      n-=2;
    }
    cout<<n<<'\n';
  }
}
