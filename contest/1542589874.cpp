#include <bits/stdc++.h>
int main(void){
  std::string pass;
  std::cin>>pass;
  int n;
  std::cin>>n;
  char first[n], second[n];
  for(int i=0;i<n;i++){
    char f, s;
    std::cin>>f>>s;
    if(f==pass[0]&&s==pass[1]){
      std::cout<<"YES\n";
      return 0;
    }
    else{
      first[i]=f;
      second[i]=s;
    }
  }
  for(int i=0;i<n;i++){
    if(pass[0]==second[i]){
      for(int j=0;j<n;j++){
        if(pass[1]==first[j]){
          std::cout<<"YES\n";
          return 0;
        }
      }
    }
  }
  std::cout<<"NO\n";

  return 0;
}
