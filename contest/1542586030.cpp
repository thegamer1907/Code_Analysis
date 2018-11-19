#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#define NUM 100000
using namespace std;


int main(){
  string pass;
  cin>>pass;
  int N;
  cin>>N;
  string total="";
  string total2="";
  string total3="";
  vector<string> words;
  for(int i=0; i<N;i++){
    string temp="";
    string l;
    cin>>l;
    total=total+l;
    for(int j=0;j<i;j++){
      temp = temp + l + total[j*2] + total[j*2+1] + l ;
    }
    total2 = total2 + temp;

    total3 = total3 + l + l;

    if(total.find(pass) != std::string::npos){
      cout<<"YES"; return 0;
    }
    if(total2.find(pass) != std::string::npos){
      cout<<"YES"; return 0;
    }
    if(total3.find(pass) != std::string::npos){
      cout<<"YES"; return 0;
    }

  }

  cout<<"NO";return 0;
}
