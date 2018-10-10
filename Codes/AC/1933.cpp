#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<long long,long long>one,two;
  long long N,K,ans=0;
  long long arr[200001];
  cin>>N>>K;
  for (int i=0;i<N;i++)
    cin>>arr[i];
  for (int i=0;i<N;i++){
    if (arr[i]%K==0)
      ans+=two[arr[i]/K];
    if (arr[i]%K==0)
      two[arr[i]]+=one[arr[i]/K];
    one[arr[i]]++;
  }
  cout<<ans<<endl;
  return 0;
}
