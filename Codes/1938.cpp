#include <iostream>
#include <map>

using namespace std;

int main(){
  int numbers,k;
  while(cin>>numbers>>k){
    map<pair<int,int>,long long> count;
    long long total=0;
    for(int n=0;n<numbers;n++){
      int number;
      cin>>number;
      if(number%k==0){
        int prev=number/k;
        total+=count[make_pair(prev,2)];

        count[make_pair(number,2)]+=count[make_pair(prev,1)];
      }
      count[make_pair(number,1)]++;
    }

    cout<<total<<'\n';
  }
}
