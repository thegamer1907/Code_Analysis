#include <bits/stdc++.h>



int main(void){

  int n, k;
  std::cin>>n>>k;
  std::set<int> myset;
  int aux;
  int number;
  std::vector<int> myvector;
  for(int i=0;i<n;i++){
    number=0;
    int cont=k-1;
    for(int j=0;j<k;j++){
      std::cin>>aux;
      if(aux==1){
        number+= 1 << cont;
      }
      cont--;
    }
    myset.insert(number);

  }
  for(std::set<int>::iterator it=myset.begin();it!=myset.end();++it){
    int z=*it;
    myvector.push_back(z);
  }
  std::sort(myvector.begin(), myvector.end());
  for(int i=0;i<myvector.size();i++){
    for(int j=0;j<myvector.size();j++){
      int b = myvector[i] & myvector[j];

      if(b == 0){
        std::cout<<"YES\n";
        return 0;
      }
    }
  }
  std::cout<<"NO\n";


  return 0;
}
