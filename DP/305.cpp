#include <bits/stdc++.h>
using namespace std;
int main()
{
  int men,ans=0;
  cin>>men;
  int vet[men];
  for(int i=0;i<men;i++)cin>>vet[i];
  int woman;
  cin>>woman;
  int vet2[woman];
  for(int i=0;i<woman;i++)cin>>vet2[i];
  sort(vet,vet+men);
  sort(vet2,vet2+woman);
  for(int i=0;i<men;i++){
    for(int j=0;j<woman;j++){
        if(abs(vet[i]-vet2[j])<=1 && vet2[j]!=-5){
          vet2[j]=-5;
          ans++;
          j=woman;
        }
    }
  }
  cout<<ans<<endl;
  return 0;
}