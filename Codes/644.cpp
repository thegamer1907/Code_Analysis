#include <iostream>

using namespace std;
typedef long long ll;

ll k,ans,ka,sum;
int sumcif(ll nr){
  sum=0;
  while(nr)sum+=nr%10,nr/=10;
  return sum;
}

int main()
{
    cin>>k;
    while(ka<k)
      if(sumcif(++ans)==10) ka++;
    cout<<ans;
    return 0;
}
