#include <iostream>
#include<vector>

using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  
  vector<int>v;
  int numbers;
  for(int i=0;i<n;i++){
      cin>>numbers;
      v.push_back(numbers);
  }
  
  int myPlayer = v[k-1];
  int counter = 0;
  for(int j=0;j<v.size();j++){
      if(v[j]>0 && v[j]>=myPlayer)
        counter++;
  }
  cout<<counter<<endl;
}
